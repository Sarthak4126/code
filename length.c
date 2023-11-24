#include<stdio.h>
void main()
{
    char a[100];
    printf("enter the string");
    scanf("%[^\n]s",a);
    int i,l=0;
    for(int i=0;;i++)
    {
        if(a[i]=='\0')
        break;
        else
        l++;
    }
    printf("the length is=%d",l);
    char b[l];
    for ( i = 0; i < l; i++)
    {
        b[i]=a[i];
    }
    printf(" the copied string %s",b);
    int flag=0;
    for ( i = 0; i < l; i++)
    {
        int m=a[i];
        int n=b[i];
        if(m!=n)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("the given string is equal");
    else
    printf("the given string is not equal");
}