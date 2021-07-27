//#include<iostream.h>
#include <iostream>
#include <conio.h>
//use #include<fstream.h> in Turbo c
#include <fstream>
using namespace std;//Turbo c/c++ doesn't namespaces
                    //so no need to type this line in Turbo c/c++

int main()
{
    //two strings for get content for the file
    char f1[50],f2[50];

    //*getting input from the user and storing it in
    // file "New1.txt" using ofstream(output file stream)

    //*file will be created in
    // C:\TURBOC3\BIN if you use Turbo c/c++

    ofstream F1("New1.txt");//opening file
    cout<<"Enter File 1 content : ";

    //get maximum 50 char as input and store in f1
    cin.getline(f1,50);//getting full line as input
    F1<<f1;//inserting given line in file
    F1.close();//closing the file
    //*It is mandatory to manually close
    // the file if you open it

    //creating new file and storing the given input in file
    ofstream F2("New2.txt");//opening file
    cout<<"Enter File 1 content : ";
    //get maximum 50 char as input and store in f2
    cin.getline(f2,50);//getting input
    F2<<f2;//storing given input in file
    F2.close();//closing the file

    //creating new file to merg two files
    ofstream F3("New3.txt");
    F3<<f1<<endl<<f2;//inserting both f1 and f2 content in F3
    F3.close();//closing the file

    cout<<"File Merged successfully!\n";

getch();
return 0;
}
