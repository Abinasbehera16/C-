#include<iostream.h>
#include<conio.h>
float cube();
int main()
{
float num;
cout<<"Enter the number:";
cin>>num;
cout<<"the cube the number"<< " "<<num<<"is"<<cube(num);
getch();
return 0;
}
float cube(float a)
{
return a*a*a;
}
