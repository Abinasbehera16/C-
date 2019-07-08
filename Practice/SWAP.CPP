#include<iostream.h>
#include<conio.h>
int main()
{clrscr();
int a,b;
void swap(int, int);
cout<<"The no. is"<<"\n";
cin>>a>>b;
swap(a,b);
cout<<"a=="<<a<<" "<<"b=="<<b;
cout<<"a=="<<a<<" "<<"b=="<<b;
getch();
return 0;
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
cout<<"x=="<<x<<"y=="<<y<<"\n";
}

