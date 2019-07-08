#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
clrscr();
char str[80];
int i,count=0;
cout<<"ent char";
gets(str);
puts(str);
for(i=0;str[i]!='\o';i++)
if(str[i]==' ')
count++;
puts(count);
getch();
return 0;
}