#include<iostream.h>
#include<process.h>
#include<conio.h>
int main()
{
clrscr();
void convert(float&,char&,char);
float distance;
char choice,type='F';
cout<<"Enter the distance";
cin>>distance;
cout<<"\n You want distance in feets or inches ?\n";
cin>>choice;
switch(choice)
{
case 'F':convert(distance, type,'F');
break;
case 'I':convert(distance,type,'I');
break;
default: cout<<"Wrong choice";
exit(0);
}
cout<<"Distance"<<distance<<type<<"\n";
getch();
return 0;
}
void convert(float&d,char&t,char ch)
{
switch(ch)
{
case 'F':if( t=='I')
{d=d/12;
t='I';
}
break;
case 'I': if(t=='F')
{
d=d*12;
t='F';
}
break;
}
return;
}
