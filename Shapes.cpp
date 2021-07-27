// use #include<iostream.h> in turbo c/c++
#include <iostream>
#include<conio.h>
#include <math.h>
using namespace std;//Turbo c/c++ doesn't namespaces 
                    //so no need to type this line in Turbo c/c++

//creating abstract class named as shape
// Note : 1) you cannot create object for abstract class
//  but you can create pointers for abstract class
// 2) abstract class have atleast one virtual function with
// 3) all derived class of abstract class should be define the same
//   functions that the abstract class declared as virtual
class shape
{
protected://members as protected to give access to derived clasees
float x,y;//all of the shapes have atleast 2 sides so 2 variables
float area,peri;// for store area and perimeter

//abstract virtual functions
virtual void calarea()=0;
virtual void calperi()=0;

public://public member functions to display the area and perimeter
    //all derived classes can access this function
    //so derived class no need to declare another function for display
void disp()
{
cout<<"\n\t Area : "<<area;
cout<<"\n\t perimeter : "<<peri;
}
};

// creating class for square shape with deriving shape class
class square:public shape
{
public:

void accept()//getting value of side(all sides of square is equal)
{ cout<<"\n Enter the value of x:"; cin>>x;}

//calculating area of square -->>formula(side X side)
void calarea(){ area=x*x;}

//calculating peremeeter of square -->>formula(4 X side or 4X)
void calperi(){peri=4*x;}
};

// creating class for triangle shape with deriving shape class
class triangle:public shape
{
private:
float z;//creating new data member for 3rd side(triangle has 3 sides)

public:

void accept()//getting all sides of triangle from user
{cout<<"\n Enter the value of x,y,z \n "
<<"make sure two sides added is equal to third side : ";//otherwise it will not make a triangle
cin>>x>>y>>z;}

//calculating area of triangle
void calarea(){float s=(x+y+z)/2;
area=sqrt(s*(s-x)*(s-y)*(s-z));//Heron's formula
}

//calculating perimeter of triangle formula-->>(base+side1+side2)
void calperi(){peri=(x+y+z);}
};

// creating class for Rectangle shape with deriving shape class
class rectangle:public shape
{
public:

//getting values of sides(rectangle has 4 sides and two sides should same)
//getting length and breath of rectangle
void accept(){cout<<"\n Enter the value of x & y:";cin>>x>>y;}

//calculating area of rectangle formula-->>(length X breath)
void calarea(){area=x*y;}

//calculating perimeter of rectangle formula-->> (2 x (length+breath))
void calperi(){peri=2*(x*y);}
};


//main function
int main()
{
// use clrscr() in turbo c/c++
system("cls");

cout<<"\n\t square:-";

square sq;//creating a object for square class

sq.accept();//getting input
sq.calarea();//calculating area
sq.calperi();//calculating perimeter
sq.disp();//printing all values


cout<<"\n\n\t Triangle";

triangle tr;//creating object for triangle class
tr.accept();//getting input
tr.calarea();//calculating area
tr.calperi();//calculating perimeter
tr.disp();//printing all values

cout<<"\n\n\t Rectangle";
rectangle re;//creating object for rectangle class
re.accept();//getting input
re.calarea();//calculating area
re.calperi();//calculating perimeter
re.disp();//printing all values

getch();//waiting for any action from user

}

