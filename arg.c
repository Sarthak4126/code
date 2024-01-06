//program to perform addition of 2 no.`s by using function(without argument without return value)
//header file
#include<stdio.h>
//main function heading
void main()
{
//function taking for performing addition(without arguments ,without return type--->void)
void add();
//variable declaration(optional)
int c;
add();
}
//function calling
void add()
{
//variable declaration
int x,y;
//input statement from user
printf("Enter two numbers");
scanf("%d%d",&x,&y);
//statement for performing additiom=n
int z=x+y;
//output statement
printf("Sum=%d",z);
}