/*  Note :
----------------------------------------------Friend function------------------------------------------------

	* A FRIEND function of a class is defined outside of that class' scope but it has the rights to access
	  all private and protected members of the class.

	* Friend function are not member function.

	* If i want access the private or protected members of a class,i should declare the function as friend
 	  of my class.

	* To use the friend function just we want declare the friend function in the class first.

	* Function definition can be right anywhere.

-----------------------------------------------------------------------------------------------------------
*/

//use #include<iostream.h> in Turbo c/c++
#include <iostream>
#include<conio.h>
using namespace std;//Turbo c/c++ doesn't support namespaces
                //so no need to type this line in Turbo c/c++

class two;//*Declaring* class 'two'

class one//*Defining * class 'one'
{
private:
    int a;
    float b;

public:

    //public function to get values from user
    //default return type is int
get(){//so no need to explicit type the return type
cout<<"\n Enter the value of a in integer and b in float : "; cin>>a>>b;
return(0);}//default return type is int
            //so returning a integer

//public function to print the values
      //default return type is int
put()//so no need to type explicit return type
{cout<<"\n The value of A,B in class one : "; cout<<a<<" "<<b<<endl;
return(0);}

//declaring friend function
//to access data members of this class
friend void add(one o,two t);
};

//*Defining class two *
class two: public one//class 'two' with deriving class 'one'
{
private :
    int x;
    float y;
public:

    //public function to get values from user
    //default return type is int
get(){//so no need to explicit type the return type
cout<<"\n Enter the value of x in integer and y in float : ";cin>>x>>y;
return(0);}

//public function to print the values
      //default return type is int
put()//so no need to type explicit return type
{cout<<"\n The value of x,y in class two : "; cout<<x<<" "<<y<<endl;
return(0);}

//we need to access data members of both class 'one' and 'two'
  //in friend function.
//so declare same friend function in both classes
friend void add(one o,two t);
};

//*Defining* add function (friend function)
void add(one o,two t)
{
one temp;//creating temporary object to save addition values
        // you can also create object for class 'two'

temp.a=o.a+t.x;//adding a and x and storing addition in -a of temp object)
temp.b=o.b+t.y;//adding b and y and storing addition in -b of temp object)
//*now addition values available in temporary object*

//printing the addition values
cout<<"\n Addition of integer value: "; cout<<temp.a;
cout<<"\n Addition of float value:"; cout<<temp.b;
}

//main function
//default return type is int
//so no need to explicit type the return type
//this is applicable also for main function
main()
{
// use clrscr() in Turbo c/c++

one t1;//creating object for class 'one'
two t2;//creating object for class 'two'

t1.get();//getting values for a and b
t2.get();//getting values for x and y

t1.put();//printing the given values of a and b
t2.put();//printing the given values of x and y

add(t1,t2);//printing addition values ( a+x , b+y )

getch();
return 0;
}