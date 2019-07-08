#include<stdio.h>
#include<conio.h>
int add(int,int);
main()
{
int x,y,s;
clrscr();
printf("Enter the number");
scanf("%d%d",&x,&y);
s=add(x,y);
printf("%d",s);
getch();
return 0;
}
int add(int a,int b)
{
int c;
c=a+b;
return c;
}