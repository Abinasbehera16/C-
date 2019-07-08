#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int i;
for(i=0;i<8;i++)
{
if(i==4)
break;
else
{
cout<<i<<"\n";
}
}
for(i=0;i<8;i++)
{
if(i==4)
continue;
else
{
cout<<i<<"\n";
}
}
getch();
return 0;
}