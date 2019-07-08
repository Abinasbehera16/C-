#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{  clrscr();
char a[90];
cin.getline(a,90);
int z=strlen(a);
for(int i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
a[i]='-';
}
cout<<"The new string is"<<" :-";
cout.write(a,z);
getch();
return 0;
}


