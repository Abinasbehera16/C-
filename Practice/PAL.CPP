#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{ clrscr();
char a[10],b[10];
cout<<" pallindrome check;";
gets(a);
puts(a);
strcpy(b,a);
strrev(b);
if(strcmp(b,a)==0)
{
cout<<"pallindrome";
}
else
{
cout<<"not pallindrome:";
}
getch();
return 0;
}
