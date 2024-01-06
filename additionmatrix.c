//program to perform the addition of two matrices
//header file
#include<stdio.h>
//main function heading
void main()
{
//array(variable) declaration
int i,j,mat1[10][10],mat2[10][10],mat3[10][10],size=3;
//nested loop statement for addititon of 2 matrices
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
//input statement from user
printf("Enter the element mat1[%d][%d]",i,j);
scanf("%d",& mat1[i][j]);
}
}
//nested loop statement for addititon of 2 matrices
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
//input statement from user
printf("Enter the element mat2[%d][%d]",i,j);
scanf("%d",& mat2[i][j]);
}
}
//nested loop statement for addititon of 2 matrices
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
//statement for addition of 2 matrices
mat3[i][j]=mat1[i][j]+mat2[i][j];
}
}
//nested loop statement for addititon of 2 matrices
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
//output statements
printf("%d\t",mat3[i][j]);
}
printf("\n");
}
}