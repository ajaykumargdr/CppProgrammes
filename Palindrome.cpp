//use #include<iostream.h> in Turbo c/c++
#include <iostream>
#include<conio.h>
using namespace std;//Turbo c/c++ doesn't namespaces 
                    //so no need to type this line in Turbo c/c++

class palindrome
{
private:

char s[50],ch;
int k;
bool flag;

public:
//public function to get the string from user
void get()
{
cout<<"\n palindrome:-";
cout<<"\n Enter the string: "; cin>>s;

}

//this function will copy the given string and reverce itself
void check()
{
flag=1;//setting flag as 1

//strlen will return length of the given string
k=strlen(s)-1;//saving the length of s(string) in k
//if it return 6 means 0 to 5 so less 1 from k
//so now 0 to 5 is 6 charecters

char *po=&s[0]; //creating a pointer and storing address of
//first letter

po+=k;//first place + length of total string(0+5=5)
//so now so points the last letter of the string

for(int i=0;i<=k/2;i++,po--)
//checking the first(0) letter and last(5) letter are same or not
//then second first(1) letter and second last(4) letter are same or not
//then third first(2) letter and third last(3) are same or not
//loop continue like this

//if any letter it is differ flag will be 0 and loop will be break
    if(s[i]!=*po) {flag=0;break;}
//if all letters are same then flag will be 1
//flag will not change until the letters differ
}

//function to show the result
void show()
{
//0=false and 1=true
if(flag) cout<<"\n string is a palindrome";//if flag is equal to 1
//if it is 0 else part will be executed
else cout<<"\n string is not a palindrome";
}
};

//as we discuss in other programme default return type is int
//so no need to type return type explicitly
main()
{
//use clrscr() to clear the screen in Turbo c/c++
system("cls");

palindrome obj;//creating a object for palindrome class

obj.get();//getting input from user

obj.check();//checking is it palindrome or not

obj.show();//printing the result

getch();//waiting until any action from user

return 0;
}
