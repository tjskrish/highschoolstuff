#include<iostream.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>

struct student
{
	char name[100];
	int tmk;
} s[100];

int n;

void accept()
{
	int i;cout<<"\nEnter the number of students ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"\nEnter the name of student "<<i+1<<" :";
	gets(s[i].name);
	cout<<"\nEnter the total mark of student "<<i+1<<" :";
	cin>>s[i].tmk;
	}
}

void minmax()
{
	int min,max,i;
	min=s[0].tmk;
	max=s[0].tmk;

	for(i=0;i<n;i++)
	{
	if(s[i].tmk<min)
	min=s[i].tmk;
	if(s[i].tmk>max)
	max=s[i].tmk;
	}

	for(i=0;i<n;i++)
	if(s[i].tmk==min)
	{
	cout<<"\nThe student who scored minimum :";
	cout<<endl<<"Name :"<<s[i].name<<" \nMark ="<<s[i].tmk;
	}

	for(i=0;i<n;i++)
	if(s[i].tmk==max)
	{
	cout<<"\nThe student who scored minimum :";
	cout<<endl<<"Name :"<<s[i].name<<" \nMark ="<<s[i].tmk;
	}

}

void main()
{
	int i;
	char ch;
	do{            clrscr();
	cout<<"MENU\n1)Accept\n2)Min and maximum\n";
	cin>>i;
	switch(i)
	{
	case 1:accept();break;
	case 2:minmax();break;
	default:cout<<"\nSorry";break;
	}

	cout<<"\nWant to repeat? ";cin>>ch;
	}while(ch=='y');
}

