#include<stdio.h>

    int main()
{
int year;
printf("Enter the Year To check wheather the year is leap year or not \n");
scanf("%d",&year);
if(year%4==0)
{
    printf("%d is leap year",year);
}
else
{
     printf("%d is Not  leap year",year);
}
return 0;
}