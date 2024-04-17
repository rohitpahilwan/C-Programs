#include<stdio.h>

    int main()
{
int age;
printf("Enter your age ");
scanf("%d",&age);
if(age>90)
{
    printf("You are above 70, you can not drive");
}
else
{
    printf("You can drive");
}
return 0;
}