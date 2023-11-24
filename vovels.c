#include<stdio.h>
void main()
{
    char a[100];
    printf("enter the string");
    scanf("%[^\n]s",a);
    int l=strlen(a);
    int vow=0,con=0;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='A'||a[i=='E']||a[i]=='I'||a[i]=='O'||a[i]=='U'
        ||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            vow++;
        }
        else
        {
            con++;
        }
    }
printf("the vowels in the string is=%d\n",vow);
printf("the consonant in the string is=%d",con);
}