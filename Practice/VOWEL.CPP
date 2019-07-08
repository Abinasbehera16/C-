#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int main()
{
char l[90];
int v=0;
cout<<"enter the string"<<"\n";
gets(l);
for(int i=0;l[i]!='\0';i++)
{
switch(l[i])
{
case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U': ++v;
}
}
cout<<"the vowel is"<<v<<endl;
getch();
return 0;
}
