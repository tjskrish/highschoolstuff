#include<iostream.h>
#include<process.h>
#include<conio.h>

void ins(int q[],int &front,int &rear,int size)
{
int itm;
cout<<"\nEnter the item :";
cin>>itm;


if((rear+1)%size==front)
cout<<"\nSorry insertion not possible\n";

else
{
rear=(rear+1)%size;
q[rear]=itm;

if(front==-1)
front=0;
}

}
       int t=-1;

void del(int &front,int &rear,int size)
{

static u=1;

if(rear==-1 && t==-1)
cout<<"\nDeletion not possible";

else
{t=front;
if(front==rear)
front=rear=-1;
else
front=(front+1)%size;
}

if(rear==-1 && t==0 )
{cout<<"\nQueue Empty";t=-1;}

u++;
}

void disp(int q[],int front,int rear,int size)
{
do
{
cout<<q[front];
front=(front+1)%size;
}
while(rear!=front);

getch();
}

void main()
{
int q[100],ch,size=5,front=-1,rear=-1;
while(1)
{        clrscr();
cout<<"\nMENU\n1)Insert\n2)Delete\n3)Display\n4)Exit\nEnter ur choice :";
cin>>ch;
switch(ch)
{
case 1:ins(q,front,rear,size);      break;
case 2:del(front,rear,size);break;
case 3:disp(q,front,rear,size);break;
case 4:exit(0);
}
getch();
}
}
