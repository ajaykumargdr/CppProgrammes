//1) Here we are going to create class named string

//2) This is not std::string
// so don't use using namespace std here (Turbo c/cpp always doesn't support namespaces)
// because in std namespace there is inbuilt class string
// if you use using namespace std it will intrupt that
// std::string

//3) In this Programme string is just a user defined class
    //which is using a char array

#include <iostream>
//use #include<iostream.h> in Turbo c/c++ compiler
#include<string.h>
#include<conio.h>
#include<math.h>

//declaring string class
class string
{
char s[15];//char array

public:
    //function to get input from user
void getstring(){
std::cout<<"Enter the string : ";
std::cin>>s;}

//overloading the == operator
int operator==(string st){
//strcmp() is a inbuilt function it will 0 if 2 string
// is same

//without {}brakets the first line only work
if(strcmp(s,st.s)==0) return 1;//if true only execute this line

//here if previous condition is true it will return 1 and
//it will not read the below lines
//so no need to give else here (you can give if you want)
return(0);
}

//overloading the + operator
string operator+(string st){
string str;//creating a object for string class

//strcpy(destination_str,source_str)is a inbuilt function
//it will copy the source str to destination str
strcpy(str.s,s);

//here strcat will concatenate with st.s (merging two string)
strcat(str.s,st.s);
return(str);//returning the object str
            //(that holds the concartinated string)
}

//length finding function
int length(){
//strlen will return the length of the string
return strlen(s);
}

void display(){std::cout<<s;}//dsiplaying the s(string)

};

int main(){
//you can also use void main() in Turbo c/c++
//clrscr();//clearing previous ouputs
//use clrscr() in Turbo c/c++
system("cls");

//creating objects for class string
string s1,s2,s3;
s1.getstring();//getting two strings
s2.getstring();

s3=s1+s2;//adding(merging) the two string

std::cout<<"\n concatenate:\t";
s3.display();//displaying concatenated string

if(s1==s2)//checking two strings are equal

std::cout<<"\n string status:Equal";//if true

else//if false

//printing length of two strings
std::cout<<"\n string status:unequal";
std::cout<<"\n str1 length\t"<<s1.length();
std::cout<<"\n str2 length\t"<<s2.length();

//printing length of concatenated string
std::cout<<"\n str3 length\t"<<s3.length();
getch();
}
