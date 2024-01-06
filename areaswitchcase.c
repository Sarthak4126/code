#include<stdio.h>
void main()
{
    int ch;
    int r;
    float area,peri;
    float s;
    float l,b;
    printf("1.circle\n 2.square\n 3.rectangle\n enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("enter the radius");
        scanf("%d",&r);
        area=3.14*r*r;
        peri=3.14*2*r;
        printf("area of circle:%f",area);
         printf("perimeter of circle:%f",peri);
       break;
       case 2:
       printf("enter the value");
       scanf("%d",&s);
       area=s*s;
       peri=4*s;
          printf("area of square:%f",area);   
       printf("perimeter of square:%f",peri);   
       break;
       case 3:
       printf("enter the value");
      scanf("%d%d",&l,&b);
      area=l*b;
      peri=2*(l+b);
      printf("area of rectangle:%f",area); 
      printf("perimeter of rectangle:%f",peri); 
      break;
    }

}