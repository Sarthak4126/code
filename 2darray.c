//program of printing reverse matrix of 2D array
//header file
#include<stdio.h>
//main function heading
void main()
{
//array(variable) declaration
int a[3][3];
//intializing values
int i,j;
//nested loop statement
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//input statement from user
printf("Enter the element:a[%d][%d]",i,j);
scanf("%d",&a[i][j]);
}
}
//output statement
printf("The 2D array is:\n");
//nested loop statement
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//output statement
printf("%d\t",a[i][j]);
}
//output statement
printf("\n");
}
//output statement
printf("The inverse matrix  of 2D array is:\n");
//nested loop statement
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//output statement
printf("%d\t",a[j][i]);
}
//output statement
printf("\n");
}
}