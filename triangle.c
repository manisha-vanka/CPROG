#include<stdio.h>
#include<math.h>
void main()
{
int x1,x2,x3,y1,y2,y3;
float a,b,c;
scanf("%d ,%d ,%d,%d,%d,%d " ,&x1,&x2,&x3,&y1,&y2,&y3);
if((x1==x2&&x1==x3)||(y1==y2&&y1==y3))
printf("cannot form a triangle");
else
{
a=sqrt(((x1-x2)*(x1-x2))+(y1-y2)*(y1-y2));
b=sqrt(((x2-x3)*(x2-x3))+(y2-y3)*(y2-y3));
c=sqrt(((x3-x1)*(x3-x1))+(y3-y1)*(y3-y1));
if(a==b&&a==c)printf("equilateral triangle");
else if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==b*b+a*a))
printf("Rightangled triangle");
else if(a==b || b==c || c==a)
printf("Isosceles triangle");
else
printf("Scalene triangle");
}
}