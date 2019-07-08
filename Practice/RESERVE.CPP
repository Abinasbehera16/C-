#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int main()
{
clrscr();
int l,i,k=0;
char s[90],w[90];
cout<<"Enter the string"<<endl;
//cin.getline(s,90);
gets(s);
strcat(s," ");
for(i=0;s[i]!='\0';i++)
{
if(s[i]!=' ')
{
w[k]=s[i];
k=k+1;
}
else
{
while(k>0)
{
cout<<w[--k];
}
cout<<s[i];
}
}
getch();
return 0;
}