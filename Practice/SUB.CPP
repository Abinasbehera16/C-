#include<iostream.h>
#include<conio.h>
#include<String.h>
int indexofString(char str[],char s[])
int i,j,k,l;
l=strlen(s);
for(i=0; str[i+l-1];i++)
{
k=i;
for(j=0;j<=l-1;j++)
{
if(str[k]!=s[j])
break;
k++;
}
if(i==j)
return(i);
return(-1);
main()
{
int index;
str l;
indexofString("abaabbab","aabb");
if(index==-1)
{
cout<<"not found" ;
}
else
{
cout<<"found";
}
}