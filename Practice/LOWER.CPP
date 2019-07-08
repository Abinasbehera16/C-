#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
int count=0;
cout<<"enter the new character";
cin.get(ch);
while(ch!='\n')
{ if(ch>='a'&&'z'>=ch)
{
cout.put(ch);
count++;
}
cin.get(ch);
}
cout<<"no. of char="<<count<<"\n";
getch();
}