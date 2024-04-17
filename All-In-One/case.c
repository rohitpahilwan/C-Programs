#include<stdio.h>

    int main()
{
char ch;
printf("Enter the character to check case \n");
scanf("%c",&ch);
if(ch<=122 && ch>=97)
{
    printf("%c is in LOWER CASE \n",ch);

}
else if(ch<=90 && ch>=65)
{
    printf("%c is UPPER CASE \n",ch);

}
else
{
    printf("%c is Not character \n",ch);
}
return 0;
}