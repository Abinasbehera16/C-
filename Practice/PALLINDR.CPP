#include<iostream.h>
#include<conio.h>
int main()
{ clrscr();
int i,sum,r;
cout<<"Enter a number"<<"\n";
cin>>i;
cout<<"The number is"<<i;
while(i>0)
{
r=i%10;
sum=sum*10+r;
i=i/10;
}
if(i==sum)
{
cout<<"the number is pallindrome";
}
else
{
cout<<"The number is not pallindrome";
}
getch();
return 0;
}