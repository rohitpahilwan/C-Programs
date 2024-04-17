#include<stdio.h>

    int main()
{
int a,b,c;
float t;
printf("Enter physics marks \n");
scanf("%d",&a);
printf("Enter chemistry marks \n");
scanf("%d",&b);
printf("Enter maths marks \n");
scanf("%d",&c);
t=(a+b+c)/3;
if((a<=33) || (b<=33) || (c<=33))
{
printf("You are fail %f",t);
}
else
{
printf("You are pass with %f Percentage",t);
}

return 0;
}