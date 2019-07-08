#include<iostream.h>
#include<string.h>
#include<conio.h>
int main()
{
char a[10], b[10];
int n,i;
cout<<"enter a String"<<"\n";
cout<<"enter the size of String";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<< "The String is"<<":-"<<a;
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
cout<<"Pallindrome";
else
cout<<"pallindrome";
getch();
return 0;
}

