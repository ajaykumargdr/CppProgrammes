#include<iostream>
//use #include<iostream.h> in Turbo c/c++
#include<conio.h>
using namespace std;//Turbo c/c++ doesn't namespaces 
                    //so no need to type this line in Turbo c/c++
//declaring function
void matrices(int ,int);
//overloading the previous function
void matrices(float ,float);
void add();
void disp();

// declaring some global variables
// this variables available in whole programme
//a,b,c are two dimensional array
int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j;
float e,f;

int main()
{

// use clrscr() in Turbo c/c++
system("cls");

//getting the size of row and column of matrix A
cout<<"\n Enter the size of matrix A's row and column \n\t";
cin>>m>>n;
cout<<"\n Enter the size of matrix B's row and column \n\t";
cin>>p>>q;

//checking matrix -A's row and column-
// and -B's row and column- is same or not

if((m==p)&&(n==q)) cout<<"\n\t The matrix can be added";//if same
else {cout<<"\aThis matrix cannot be added!\n";exit(0);}
//exit(0) will end the programme so below lines will not executed
// \a for alert sound

matrices(i,j);
matrices(e,f);
add();
disp();
}

//getting input values for matrix A (integer matrix)
void matrices(int i,int j)
{
cout<<"\n\t Enter the matrix A \n";
for(i=0;i<m;i++)//m rows and n columns
for(j=0;j<n;j++)
cin>>a[i][j];
}

//getting input values for matrix B (float matrix)
void matrices(float i,float j)
{
cout<<"\n\t Enter the matrix B \n\t";
for(i=0;i<p;i++)//m rows and n columns
for(j=0;j<q;j++)
cin>>b[(int)i][(int)j];
}

//function to add matrices
void add()
{//adding two matrices using index values
//same index value of A and B will be added
//Example 1 : A[0][0] and B[0][0] will be added
//Example 2 : A[1][0] and B[1][0] will be added

for(i=0;i<m;i++)
for(j=0;j<n;j++)
c[i][j]=a[i][j]+b[i][j];//added values will be stored in matrix c
}

//function to display the matric c(a and b added)
void disp()
{
cout<<"\n\t sum of matrix \n";

for(i=0;i<m;i++){//rows will be i
for(j=0;j<n;j++){//columns will be j
cout<<c[i][j]<<" ";}
cout<<endl;//ending a line after a single row(line) printed
}
getch();

}


