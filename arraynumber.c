//program to print numbers in the array 
//header file
#include<stdio.h>
//main function heading
int main()
{
//variable declaration for array
int a[9+1]={1,2,3,4,5,6,7,8,9,10},i;
//assignning values 
a[0]=10;
a[1]=20;
a[2]=30;
a[3]=40;
//for loop statement
for(i=0;i<10;i++)
{
//output statement
printf("%d\n",a[i]);
}
}