/*Note:
  Command line arguments is used for passing arguments to
   * the main function
 * argc(argument count) and argv(pointer of char aray) used
   * to pass the arguments
 * argc will count the arguments and
    * arguments are available in the char array pointer argv[]

 *** How to pass?
    * go to cmd(command prompt)
    * and type cd and copy your source file directory and past
    * now it's looks like cd C:\C++\New file handle
      * (press enter)
    * now type the source file name Exmpl- "File.cpp"
      * this will available in argv[0]
    * than type argument what you want to pass
      * Exmp- File.cpp argument1 argument2
      * arhument1 and argument2 available in argv[1] and argv[2]
    * Now click enter (Make sure user programme file are compiled)
*/

//use #include<iostream.h> in Turbo c/c++
#include <iostream>
#include<conio.h>
//#include<fstream.h>
#include <fstream>
#include<stdio.h>
//#include<stdlib.h>
using namespace std; //Turbo c/c++ doesn't support namespaces
                    //so no need to type this line

//argument in main function (command line arguments)
int main(int argc,char*argv[]){


    //argc is an integer
    //argv is an pointer of character array

    //argc is arguments count
    //and argv[] is arguments vector

/* * we are going to copy a file to another
   * so we should give 3 arguments
     * 1st arg - programme File name. Exmpl(File.cpp)
     * 2nd arg - source file name. Exmpl(TextFile.txt)
     * 3rd arg - destination file. Expl(TextFile2.txt)
   * Before providing arguments for Destination and Source 
     * Create that two files first
     * Create files in same directory of your programme file
   * Source file will be copied to Destination file
*/


if(argc!=3)//checking 3 arguments got or not
    //if not :-
{cout<<"Please Provide Source file name and "
     <<"target file name "<<endl;
exit(1);//ending the programme
}

//If we got 3 arguments as well

//opening file
ifstream fin(argv[1]);//arg[1]- source file (to be copied)

//checking file is exist or not

if(fin.fail()){ //if file not available:-
cout<<"can't open source file : "<<argv[1]<<"\n";
exit(2);//end the programme
}

//opening argv[2] (destination file)
//opening file with *out*put mode
ofstream fout(argv[2],ios::out);
//checking file gets successfully opened or not
//fail()function will return 1 if file get error in opening
if(fout.fail()){
//if there is error in destination file
cout<<"can't open target file : "<<argv[2]<<"\n";
exit(3);//end the programme
}

//if file get opened sucessfully:-
char ch[50];

//copy source file into destination file

while(fin.getline(ch,50))//reading a line from source file
{ fout<<ch<<endl;//copy the data to Destination file
        //endl for end the line in file
        //next data will be copied in next line
}

fin.close();//closing source file
fout.close();//closing Destination file

return 0;
}
