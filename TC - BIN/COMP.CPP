#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"\tMENU\nEnter a choice\n1)Prime no.\n2)Factorial\n3)Febinocci\n";
	cin>>a;
	switch(a)
	{
	case 1:int flag=0,n,i;
	       cout<<"enter a no.";
	       cin>>n;
	       for(i=2;i<=n/2;i++)
	       if(n%i==0){flag=1;break;}
	       if(flag==1)
	       cout<<"Not a prime";
	       else
	       cout<<"Prime no.";break;
	case 2:int a,b=1,m;
	       cout<<"Enter the no.";
	       cin>>m;
	       for(a=1;a<=m;a++)
	       b=a*b;
	       cout<<b;break;
	case 3:int f=0,q,g,s=1,t;
	       cout<<"Enter no. of times";
	       cin>>g;
	       for(q=1;q<=g;q++)
	       {
	       cout<<" "<<f<<" ";
	       t=f+s;
	       f=s;
	       s=t;
	       }break;
	default:cout<<"Wrong choice";
	}
	getch();
}


