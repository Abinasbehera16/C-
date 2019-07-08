#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
char s[90],c;
cout<<"Enter string";
cin.getline(s,90);
for(int len=0;s[len]!='\o';len++);
int i,j,flag=1;
for(i=0,j=len-1;i<len/2;i++,j--)
{
if(s[i]!=s[j])
{
flag=0;
break;
}
}
if(flag!=0)
cout<<"pallindrome";
else
cout<<"not";
getch();
return 0;
}