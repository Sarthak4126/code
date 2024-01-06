#include<stdio.h>
void main()
{
    int sum=10,n=2;
    switch(n)
    {
        case 1:
        sum=sum+9;
        break;
        case 2:
        sum=sum+8;
        break;
        case 5:
        sum=sum+7;
        break;
        case 9:
        sum=sum+6;
        break;
        default:
        sum=sum-5;
        break;
    }
    printf("sum=%d",sum);
}