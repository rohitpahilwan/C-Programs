#include<stdio.h>

    int main()
{
int income;
float tax=0;
printf("Enter your annual income \n");
scanf("%d",&income);
if(income<250000)
{
    printf("Your tax to be paid is 0");
}
else if (income>=250000 && income<=500000)
{
    tax=0.05*income;
    printf("Your tax to be paid is %f",tax);
}
else if (income>=500000 && income<=1000000)
{
   tax=0.20*income;
   printf("Your tax to be paid is %f",tax);
}
else if (income<=10000000)
{
    tax=0.30*income;
    printf("Your tax to be paid is %f",tax);
}

return 0;
}