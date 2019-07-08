#include<stdio.h>
#include<conio.h>
void main()
{
char s[90]={"TO BE OR NOT BE"};
char *SUBSTR(char*,int ,int);
clrscr();
printf("String=%s",s);
printf("\n Substr(s,4,7)=%s",SUBSTR(s,4,7));
getch();
}
char *SUBSTR(char *STR,int i,int j)
{
int k,m=0;
char STRESS[80];
for(k=i-1;k<=i+j-1-1;k++)
{
STRESS[m]=STR[k];
m=m+1;
}
STRESS[m]='\0';
return(STRESS);
}
