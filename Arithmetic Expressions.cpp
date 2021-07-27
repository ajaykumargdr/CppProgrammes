#include <iostream>
#include <conio.h>
using namespace std;//Turbo c/c++ doesn't namespaces 
                    //so no need to type this line in Turbo c/c++

class arith{
    int a;
    float b;
public:
    void get(){
        cout<<"Enter the value : ";cin>>a;
        cout<<"Enter the float value : ";cin>>b;
        }

//Functions for aithmetic operations
    float add(){return a+b;}
    float sub(){return a-b;}
    float mul(){return a*b;};
    float divi(){return a/b;};
    float mod_divi(){return a%(int)b;};

//display function for display all operations result
void display()
{
cout<<"\n\t\t ARITHMETIC OPERATION";
cout<<"\n\tAddition         : "<<add();
cout<<"\n\tSubtraction      : "<<sub();
cout<<"\n\tDivision         : "<<divi();
cout<<"\n\tMultiplication   : "<<mul();
cout<<"\n\tModular division : "<<mod_divi()<<endl;
}
};

int main(){
    arith a1;
    a1.get();
    a1.display();
    getch();
}