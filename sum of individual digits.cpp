#include <iostream>
#include <conio.h>
using namespace std;//Turbo c/c++ doesn't namespaces 
                    //so no need to type this line in Turbo c/c++

class single{ int sum,value,individual;
public: single(){sum=0;individual++;};

//getting value from user
//inline is just a keyword that helps to
  //speedup our small functions
inline void getvalue(){
    cout<<"Enter value : ";cin>>value;}


void calc(){
//calculating the sum of digits using modulus(%)
  //operator it gives last digit of the number
while(value>0){
//sum+=value%10 it means sum=sum+(value%10)
sum+=value%10;//getting the last digit and
//adding it with the previous

//consider value as 123 than sum-->3 3+2 3+2+1

value/=10;//removing the last digit
}//if value==0 when dividing it loop get stoped

cout<<"Sum of individual digits is : "<<sum<<endl;
}

//destructor
  //this function will run when the object of this class
  // have been deleted
~single(){individual--;
cout<<"The object has been destroyed!\n";}

} ;

int main(){
//use clrscr in Turbo c/c++
system("cls");

single s1;
s1.getvalue();
s1.calc();
getch();
}
