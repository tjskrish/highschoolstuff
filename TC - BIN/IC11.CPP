#include<iostream.h>
#include<conio.h>
void main()
{
char g[80][80];
int a[80],b[80],n,m,i,j,x,y,x1,y1,f=0,l=0,p=0,k=0,flag=0,o=0;
cin>>n>>m;
for(i=0;i<80;i++)
{
a[i]=-1;b[i]=-1;
}

for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
cin>>g[i][j];
if(g[i][j]=='M')
{x=j;y=i;}
if(g[i][j]=='D')
{x1=j;y1=i;}
}           cout<<x<<y<<x1<<y1;
      i=x;j=y;               cout<<i<<j;


for(;g[j][i]!='#' && j>=0;j--)
{a[l]=j;l++;}

for(j=y+1;g[j][i]!='#' && j<n;j++)
{a[l]=j;l++;}
i++;
cout<<l;


do
{
for(k=0,p=0;k<l;k++)
{
j=a[k];
for(;(g[j][i]=='.'|| g[j][i]=='D') && j>=0;j--,p++)
b[p]=j;

if(j==-1)
{
j=n-1;
for(;(g[j][i]=='.'|| g[j][i]=='D') && j!=a[k];j--,p++)
b[p]=j;
}

j=a[k];

for(;(g[j][i]=='.'|| g[j][i]=='D' )&& j<n;j++)
{
flag=0;
for(o=0;o<p;o++)
if(b[o]==j)
flag=1;
if(flag==0)
b[p++]=j;
}

if(j==n)
{
j=0;
for(;(g[j][i]=='.' || g[j][i]=='D') && j!=a[k];j++)
{
flag=0;
for(o=0;o<p;o++)
if(b[o]==j)
flag=1;
if(flag==0)
b[p++]=j;
}
}
}

for(o=0;o<p;o++)
{
a[o]=b[o];
cout<<"("<<i<<","<<a[o]<<")";
if(i==x1 && a[o]==y1)
{f=1;goto x;}
}

l=p;
i++;
}while((i+1)%m!=x+1);

x:
if(f==1)
cout<<"YES";
else
cout<<"NO";


getch();
}
