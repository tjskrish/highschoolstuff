#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,flag=0;
cout<<"Enter a no.(other than 2) :";
cin>>n;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
cout<<"\nPrime";
else
cout<<"\nNot a Prime";
getch();
}


