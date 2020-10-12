#include<conio.h>
#include<stdio.h>
int main()
{
int i, j, n;
clrscr();// the number of rows of floyd's triangle to print\n");
//anf("%d", &n);
for(i=1; i<=5; i++)
{
for(j=1; j<=i; j++)
{
printf("* ");
}
printf("\n");
}
return 0;
}