#include<iostream.h>
#include<conio.h>
int main()
{
int x,y,z,max;
cout<<"Enter three number"<<"\n";
cin>>x>>y>>z;
cout<<x<<y<<z;
max=x;
if(y>max)
max=y;
if(z>max)
max=z;
cout<<"The largest number between the three number is "<<max;
getch();
return 0;
}