#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
clrscr();
char str[90];
int i=0;
str[0]=toupper(str[0]);
cout<<"Enter the String"<<endl;
gets(str);
str[0]=toupper(str[0]);
strupr(str[0]);
for(i=i+1;str[i]!='\0';i++)
{
if(str[i]==' ')
str[i+1]=toupper(str[i+1]);
}
cout<<"\n Updated string is:"<<str;
return 0;
}
