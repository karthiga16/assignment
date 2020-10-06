#include<stdio.h>
#include<conio.h>
int main()
{
char gender;
char name[50];
float height;
clrscr();
printf("size of name array is %d\n", sizeof(name));
printf("enter your name: ");
scanf("%[ ,a-zA-Z]s", name);
fflush(stdin);
printf("enter gender: ");
scanf("%c" ,&gender);
printf("enter height: ");
scanf("%f" ,&height);
printf("your name is %s \n",name);
if(gender=='M')
{
printf("your gender is male\n");
}
else
{
printf("your gender is female\n");
}
printf("your height is %1.1f \n",height);
getch();
return 0;
}
