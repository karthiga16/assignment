#include<stdio.h>
int main()
{
int number,reminder,count=0;
printf("enter the number\n");
scanf("%d",&number);
while(number>0)
{
number=number/10;
count=count+1;
}
printf("number of digits in given number=%d",count);
return 0;
}