//proigram for searching the element in an array by giving run time value
//header file
#include<stdio.h>
void main()
{
//array and variable declaration
int arr[30];
//variable declaration and assignment of value
int num, ele,found=0,i;
//input statement from user
printf("Enter the number of elements");
scanf("%d",&num);
printf("Enter the elements");
//nested loop statement
for(i=0;i<num;i++)
{
//input statement from user
scanf("%d",&arr[i]);
}
//input statement from user
printf("Enter the element to search");
scanf("%d",&ele);
for(i=0;i<num;i++)
{
//if statement
if(arr[i]==ele)
{
//olutput statement
printf("Element found at the index %d element: %d\n",i,ele);
//assignment of value
found=1;
//break statement
break;
}
}
//if statement
if(!found)
{
//output statement
printf("Element not found in the arary");
}
}