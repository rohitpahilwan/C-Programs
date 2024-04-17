#include<stdio.h>

    int main()
{
int a,b,c,d;
printf("Enter Four numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
{
     printf("%d is greatest in all numbers \n",a);
}
if(b>a && b>c && b>d)
{
     printf("%d is greatest in all numbers \n",b);
}
if(c>a && c>b && c>d)
{
     printf("%d is greatest in all numbers \n",c);
}
if(d>a && d>b && d>c)
{
     printf("%d is greatest in all numbers \n",d);
}

return 0;
}