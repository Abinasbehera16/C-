#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{
char h[90], g[90];
int k=0;
cout<<"Enter the string"<<endl;
cin.getline(h,90);
for(int i=0;h[i]!='\0';i++)
{
i=i+1;
}
i=i-1;
for(;h[i]!='0';i--)
{ g[k]=h[i];
k=k+1;
}
cout<<g;
return 0;
}