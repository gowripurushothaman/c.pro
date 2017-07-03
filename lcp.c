#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],b[10],i,j;
int c,d;
printf("enter the first string");
gets(a);
printf("enter the second string");
gets(b);
c=strlen(a);
d=strlen(b);
for(i=0;i<c;i++)
{
for(j=0;j<d;j++)
{
if(a[i]==b[i])
printf("%S",a[i]);
}}
}
