#include <stdio.h>
#include<fstream.h>
#include<process.h>
#include <conio.h>

void rtot(int a[][100], int n, int m)
{
int tot=0,i,j;

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
tot+=a[i][j];
cout<<"\n"<<i+1<<"th Row total ="<<tot;
tot=0;
}

}

void ctot(int a[][100],int n,int m)
{
int tot=0,i,j;

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
tot+=a[j][i];
cout<<"\n"<<i+1<<"th Coloumn total ="<<tot;
tot=0;
}
}

void transpose(int a[][100], int n, int m)
{
 int temp,i,j;

 for(i=0;i<n;i++)
 for(j=0;j<m;j++)
 {
 temp=a[i][j];
 a[i][j]=a[j][i];
 a[j][i]=temp;
 }

 for(i=0;i<n;i++)
 for(j=0;j<m;j++)
 cout<<a[i][j];

}

void main()
{
int i,j,a[100][100],g;
char ch;
int n,m;        do{
cout<<"MENU\n1)Transpose\n2)Row total\n3)Coloumn";
cin>>g;

if(g>0 && g<4)
{cout<<"enter n and m";
cin>>n>>m;
cout<<"Enter the array ";
for(i=0;i<n;i++)
for(j=0;j<m;j++)
cin>>a[i][j];}

switch(g)
{
case 1:transpose(a,n,m);break;
case 2:rtot(a,n,m);break;
case 3:ctot(a,n,m);break;
default:cout<<"Wrong choice";
}

cout<<"\nRepeat ?";
cin>>ch;
}while(ch=='y');

}


