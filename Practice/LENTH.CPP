#include<iostream.h>
#include<conio.h>
int main()
{clrscr();
int i,j;
char str[10],str1[10];
cout<<"Enter the string";
cin.getline(str,10);
cin.getline(str1,10);
for(i=0;str[i]!='\0';i++);
for(j=0;str[j]!='\0';j++);
if(i==j)
cout<<"Both string are equal";
else
cout<<"not equal";
getch();
return 0;
}