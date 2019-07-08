#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
char ch;
float a,b,c;
cout<<"Enter the two number "<<"\n";
cin>>a>>b;
cout<<"a="<<a<<"\n"<<"b="<<b;
cin>>ch;
if(ch=='+')
c=a+b;
else
if(ch=='-')
c=a-b;
else
if(ch=='/')
c=a/b;
else
if(ch=='*')
c=a*b;
else
{ cout<<"Choice is wrong";
}
cout<<"The value of c is"<<" "<<c;
getch();
return 0;
}