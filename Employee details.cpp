//use #include<iostream.h> in Turbo c/c++
#include <iostream>
#include<conio.h>
using namespace std;//Turbo c/c++ doesn't namespaces 
                    //so no need to type this line in Turbo c/c++

//creating a class
class employee
{
protected://declaring variables as protected
    //to give access to derived classes
char name[15],dept[25],grade;
int eno;
long int bp;//bp - basic salary

public://declaring functions as public

//functions to get details from user
void get()
{
cout<<"\n Enter Employee no      : ";
cin>>eno;
cout<<"\n Enter the name         : ";
cin>>name;
cout<<"\n enter the department   : ";
cin.sync();//clearing previous input in the console
            // to ignore errors in gets
gets(dept);//gets will get full line as input
            // with spaces
cout<<"\n enter the grade A or B : ";
cin>>grade;
cout<<"\n enter the basic pay    : ";
cin>>bp;
}

//function to print only some of the details
//which is derived from user
void show()
{
cout<<"\n pay slip:-";
cout<<"\n employeeno    : "<<eno;
cout<<"\n employee name : "<<name;
cout<<"\n department    : "<<dept;
}
};

//creating another class with deriving employee class
class pay:public employee
{
private://declaring member variables as private
int da,hra,pf,np;//da  = dearness allowance
                 //hra = house rent allowance
                 //pf  = provident fund
                 //np  =

public://functions as private

void calc(){//function to calculate the bp hr and pf

//if grade A this function will run
if((grade=='A')||(grade=='a'))
{
//just calculating the details
//bp is Basic salary
da=bp*10/100;//10% in bp
hra=bp*12/100;//12% in bp
pf=bp*14/100;//14% in bp
np=(bp+da+hra)-pf;//calculating np
}

else//if grade B this function will run
{
if((grade=='B')||(grade=='b'))
{
da=bp*6/100;//6% in bp
hra=bp*8/100;//8% in bp
pf=bp*10/100;//10% in bp
np=(bp+da+hra)-pf;//calculating np
}
}
}

//displaying calculated details
void disp()
{
cout<<"\n salary is         : "<<bp;
cout<<"\n Daily alowance is : "<<da;
cout<<"\n Home relavents is : "<<hra;
cout<<"\n provident fund is : "<<pf;
cout<<"\n the net pay is    : "<<np;
}
};


int main()
{
// use clrscr() in Turbo c/c++
system("cls");

pay p;
p.get();
p.show();
p.calc();
p.disp();
getch();

}
