#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int i,num,fact=1;
cout<<"enter a num";
cin>>num;
i=num;
while(num)
{
fact*=num;
--num;
}
cout<<"fact"<<i<<","<<fact;
getch();
return 0;
}