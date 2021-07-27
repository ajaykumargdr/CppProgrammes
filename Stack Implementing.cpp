// Stack implementation
//  * stack called as LIFO (Last in and first out)
//  * Last inserted element should be displayed first and
//  * first inserted element should be displayed in last
//  * like we arranging our dresses in Bero

//read from main function!
  // and read the functions and class

//use #include<iostream.h> in turbo c/c++ compiler
#include<iostream>
#include<conio.h>
using namespace std;//Turbo c/c++ doesn't namespaces 
                    //so no need to type this line in Turbo c/c++

//defining class 'stack'
class stack
{
//this stack will hold only 5 elements
int stk[5],n,i;
int top;//to count the elements in the array
        // or stack
public:

//constructor
stack()
{
top=0;
}
//declaring member functions
void push();
void pop();
void display();
};

//defining functions
//function to add elements
void stack::push (void)
{
if(top==5)
    cout<<"\n Stack is full";

else
{
top=top+1;//one element(first element) going to add
            //so increasing by 1

cout<<"\n Enter the value";
cin>>n;//getting input

// stk is an int array which we declared above

stk[top]=n;//saving the value in (array of int)<-stk[1]
            // when the top will increase to 2
            //when you pushing another element
}
}

//pop function (element last inserted element want to display
                //and after it would deleted from the array)
void stack::pop()
{

if(top==0)//top will 0 if there is
    //      no elements in the stack
cout<<"Stack is empty";

else
{
//*Remember top will count the elements*
i=stk[top];// copy the last element in i to print the last element

//consider top as 4 for example

//so 4 elements are there in the array
top=top-1;//decreasing the value by 1
//so now the top==3
// so we are assuming there are only 3 elements in the array
// we are not deleting actually but we consider only 3 elements are there

//printing the element
cout<<"\n Poped element is:"<<i;
cout<<"\n";//just ending another line for neat output
}
}

//finally we are displaying the stack(array)
void stack::display()
{
//*Remember top will count the elements*
if(top==0)//if top==0 there is nothing to display
cout<<"\n Stack is empty";

else

//just a for loop it will run for
    //top time(how many is there that much times)

//assign i=top so now i=top
//consider top==3 and i goes for 3 2 1
//so the stack printed in reverse like LIFO
for(i=top;i>0;i--)
{
cout<<"\n"<<stk[i];//stk[3]
                    //stk[2]
                    //stk[1] //will be printed
}
}

//---------------------main Function----------------
//void main() also work
int main()
{

//use clrscr() to clear the screen in Turbo c/c++
system("cls");

int ch;
stack st;//declaring object for class stack

//displaying some stuff
cout<<"\n\t1.Push Operation";
cout<<"\n\t2.Pop Operation";
cout<<"\n\t3.Display operation";
cout<<"\n\t4.Exit Operation";

do
{
cout<<"\n Enter your choice";
cin>>ch;
switch(ch)
{
case 1://if ch==1 this will run
cout<<"\n\t Push Operation";
st.push();//go and see push function above

break;//stop the sequence
      //so case 2 and others not will run

case 2:
cout<<"\n\t Pop Operation";
st.pop();//go and see pop function above
break;

case 3:
cout<<"\n\t Display operation";
st.display();//go and see displaying function above
case 4:
break;
}

} while(ch<4);
// programme will end if ch<4
}
