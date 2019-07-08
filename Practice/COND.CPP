#include<iostream.h>
#include<conio.h>
int main()
{ clrscr();
int year;
cin>>year;
if(year % 100==0)
{
if(year % 400==0)
cout<<"leap";
}
cout<<"Not century year";
getch();
return 0;
}