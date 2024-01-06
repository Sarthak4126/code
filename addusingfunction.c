//program to perform addition of 2 no.`s by using function(with argument with return value)
//header file
#include<stdio.h>
//main function heading
void main()
{
//function taking for performing addition of 2 no.`s(Function declaration)
int add(int,int);
//variable declaration
int a,b,c;
//input statement from user
printf("Enter two numbers");
scanf("%d%d",&a,&b);
//function call statememt
c=add(a,b);
//output statement
printf("Sum=%d",c);
}
//after printing same function will be called (statement)
int add(int x,int y)
{
// performing addition statement
int z=x+y;
//return statement
return z;
}