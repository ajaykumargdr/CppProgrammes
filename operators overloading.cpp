/* Note :-
	* When we use any operator(+,-,++,--...ect) with any normal
	  * variables compiler know that what to do with that operator
	  * like addion subtraction.

	* But when i use this operators with user defined variable(class) compiler
	  * didn't know what to do.

	* So we declare a operator function which is calld as operator overloader.
*/

//#include<iostream.h>
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;//Turbo c/c++ doesn't namespaces 
                    //so no need to type this line in Turbo c/c++

//creating new class
class FLOAT
{
private:
    float x,y;

public://getting x and y from user
    void input(){cout<<"\n enter two number:\n";cin>>x>>y;}
    //printing x and y
    void show(){cout<<setprecision(3)<<"\n x="<<x<<"\ty="<<y;}
    //setprecision() for print only 3 digits after decimal point

//overloading operator +
FLOAT operator+(FLOAT t)
{/* see 82 line// this function will take that as a(b)
    * so x, y of a can access here
    * b will copied in argument t
    * x, y  of b will be available in t.x and t.y
*/

FLOAT temp;//creating temporary object to add
temp.x=x+t.x;//adding x(x of a) and t.x(x of b) and storing in
        // f.x
temp.y=y+t.y;//adding y(y of a) and t.y(y of b) and storing in
        // f.y

//addition values available in temporary variable
return temp;//so return temporary variable
}

//overloading operator -
FLOAT operator-(FLOAT t)
{//* x, y  of b will be available in t.x and t.y
 //* x, y  of a will be available as x and y

FLOAT temp;//creating temporary object to subtract
temp.x=x-t.x;//subtracting x(x of a) and t.x(x of b) and storing in
        // f.x
temp.y=y-t.y;//subtracting y(y of a) and t.y(y of b) and storing in
        // f.y

//subtraction values available in temporary variable
return temp;//so return temporary variable
}

//overloading operator *
FLOAT operator*(FLOAT t)
{//* x, y  of b will be available in t.x and t.y
 //* x, y  of a will be available as x and y

FLOAT temp;//creating temporary object to subtract
temp.x=x*t.x;//multiply x(x of a) and t.x(x of b) and storing in
        // f.x
temp.y=y*t.y;//multiply y(y of a) and t.y(y of b) and storing in
        // f.y

//multiplication values available in temporary variable
return temp;//so return temporary variable
}

//overloading operator /
FLOAT operator/(FLOAT t)
{//* x, y  of b will be available in t.x and t.y
 //* x, y  of a will be available as x and y

FLOAT temp;//creating temporary object to subtract
temp.x=x/t.x;//dividing x(x of a) and t.x(x of b) and storing in
        // f.x
temp.y=y/t.y;//dividing y(y of a) and t.y(y of b) and storing in
        // f.y

//divition values available in temporary variable
return temp;//so return temporary variable
}
};

int main()
{
    //creating some object for FLOAT class
FLOAT a,b,c,d,e,f;

// use clrscr() in Turbo c/c++
system("cls");

a.input();//getting input of x and y for a
b.input();//getting input of x and y for b

c=a+b;//adding both x and both y

cout<<"\n addition\n";
a.show();//getting input of x and y for a
b.show();//getting input of x and y for b

c.show();//printing addition of both x and both y

d=a-b;//subtracting both x and both y
cout<<"\n substraction\n";
a.show();//getting input of x and y for a
b.show();//getting input of x and y for b

d.show();//printing substraction of both x and both y

e=a*b;//multipling both x and both y
cout<<"\n multiplication\n";
a.show();//getting input of x and y for a
b.show();//getting input of x and y for b

e.show();//printing multiplication of both x and both y

f=a/b;//dividing both x and both y
cout<<"\n divition\n";
a.show();//getting input of x and y for a
b.show();//getting input of x and y for b

f.show();//printing divition of both x and both y
getch();//waiting for any action from user

return 0;
}
