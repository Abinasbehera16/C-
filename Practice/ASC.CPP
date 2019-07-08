#include<iostream.h>
#include<conio.h>
int main()
{ clrscr();
char ch;
cout<<"Enter an Character";
cin>>ch;
if(ch>=48 && ch<=57)
cout<<"digi";
else if(ch>=65 && ch<=90)
cout<<"uppercase";
else if(ch>=97 && ch<=122)
cout<<"lowercase";
else
cout<<"You entered an character";
getch();
return 0;
}