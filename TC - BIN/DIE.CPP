#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
clrscr();
int x1,x2,p1,p2,s1=0,s2=0,flag=0;
cout<<" WELCOME TO DIES PLAY ";
do
{
cout<<"\n\nPlayer 1's turn to roll the die (Press enter) :";
getch();
randomize();
x1=rand()%6+1;
cout<<"\nNumber on Die :"<<x1<<endl;
s1=s1+x1;
cout<<"Score ="<<s1<<endl;
if(s1>=20)
break;
cout<<"\n\nPlayer 2's turn to roll the die (press enter) :";
getch();
randomize();
x2=rand()%6+1;
cout<<"\n Number on Die :"<<x2<<endl;
s2=s2+x2;
cout<<"\nScore ="<<s2<<endl;
if(s2>=20)
break;
}while(flag==0);
if(s1>=20)
cout<<"\nWoW!! @ #  Player 1 won the game :"<<"\nScore \nPlayer 1 ="<<s1<<"\nPlayer 2 ="<<s2;
if(s2>=20)
cout<<"\nYoY!! @ #  Player 2 won the game :"<<"\nScore \nPlayer 2 ="<<s2<<"\nPlayer 1 ="<<s1;
if(s1==s2)
cout<<"\nManaged by both !!";
getch();
}