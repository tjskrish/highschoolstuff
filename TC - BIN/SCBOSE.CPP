#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char a[50],b[50];
int i,n,n1,j;
cout<<"Enter a 3 word name : ";
gets(a);
n=strlen(a);
i=0;
b[0]=a[0];
for(i=0,j=1;i<n;i++)
{
if(a[i]==' ')
{
b[j]=a[i+1];
j++;
n1=i;
}
}
cout<<"\n"<<b[0]<<"."<<b[1];
for(i=n1;i<=n;i++)
cout<<a[i];
getch();
}



