#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
/*struct data
{
int *in;
double *fl;
char *cha;
};*/

struct col
{
col *next,*val;
char li;
int *in;
double *fl;
char *cha;
char name[30];
}*p2=NULL,*tp=NULL,*put=NULL,*nex=NULL,*valu,*tvalu=NULL;

struct table
{
col *co;
table *next;
char name[30];
}*p1=NULL;

void main()
{
clrscr();


int i,spa=0,t[100],flag=0,j,o=0,q=0,k,l,po,pi,gl=0;
char ch[900],temp[100][100];

while(1)
{
flag=0;
for(i=0;i<100;i++)
{t[i]=0;temp[i][0]='\0';}
i=0;

cout<<"SQL >";
gets(ch);
if(ch[0]=='\0')
goto y;
for(k=0;k<strlen(ch);k++)
if(ch[k]==' ')
spa++;

if(ch[k-1]!=';')
{flag=0;goto x;}


i=0;
for(j=0;ch[i]!='\0';j++)
{
for(k=0;ch[i]!=' ' && ch[i]!='\0';i++,k++)
temp[j][k]=ch[i];
temp[j][k]='\0';
if(ch[i]!='\0')
i++;
}


if(strcmp(temp[0],"create")==0)
{t[0]=1;flag=1;}

if(strcmp(temp[1],"table")==0 && t[0]==1)
{
p1=new table;
strcpy(p1->name,temp[2]);
for(int l=3;strcmp(temp[l],";")!=0;l=l+2)
{
p2=new col;
if(tp==NULL)
p1->co=p2;
tp->next=p2;
tp=p2;
strcpy(p2->name,temp[l+1]);
if(strcmp(temp[l],"int")==0)
p2->li='i';
if(strcmp(temp[l],"char")==0)
p2->li='c';
if(strcmp(temp[l],"float")==0)
p2->li='f';
}
p2->next=NULL;
flag=1;
}
if(strcmp(temp[0],"clearscreen")==0)
{clrscr();goto y;}
gl=0;
if(strcmp(temp[0],"insert")==0 && p1==NULL){flag=0;goto x;}
else if(strcmp(temp[0],"insert")==0){t[1]=1;flag=1;}

if(strcmp(temp[1],"into")==0 && t[1]==1)
{
put=p1->co;
for(l=3;strcmp(temp[l],";")!=0;l++)
{
if(put->li=='i')
{
for(o=3;strcmp(temp[o],";")!=0;o++)
{
valu=new col;
//if(gl==0)
put->val=valu;
/*else
tvalu->next=valu;
gl++;        */
*valu->in=0;
for(q=0;temp[o][q]!='\0';q++)
switch(temp[o][q])
{
case '1':*valu->in=1+pow(10,q)*(*valu->in);break;
case '2':*valu->in=2+pow(10,q)*(*valu->in);break;
case '3':*valu->in=3+(*valu->in)*pow(10,q);break;
case '4':*valu->in=4+pow(10,q)*(*valu->in);break;
case '5':*valu->in=5+pow(10,q)*(*valu->in);break;
case '6':*valu->in=6+pow(10,q)*(*valu->in);break;
case '7':*valu->in=7+pow(10,q)*(*valu->in);break;
case '8':*valu->in=8+pow(10,q)*(*valu->in);break;
case '9':*valu->in=9+pow(10,q)*(*valu->in);break;
case '0':*valu->in=0+pow(10,q)*(*valu->in);break;
}
/*tvalu->val=valu;
tvalu=valu;*/
put=put->next;
}
}
if(put->li=='c')
{
for(pi=0;temp[o][pi]!='\0';pi++,put->cha++)
*put->cha=temp[o][pi];
nex->next=put;
nex=put;
put->next=NULL;
}
}
}


x:
if(strcmp(ch,"exit")==0)
break;
//break;
if(flag!=1)
cout<<"Error\n";
y:
}

col *ptr=p1->co;
cout<<"\n      "<<p1->name<<"\n";
while(ptr!=NULL)
{
cout<<"    ";
cout<<ptr->name;
ptr=ptr->next;
}
ptr=p1->co;
cout<<endl;
while(ptr!=NULL)
{
cout<<"     ";
if(ptr->li=='i')
cout<<(*ptr->val->in);
if(ptr->li=='c')
while(*ptr->cha!='\0')
cout<<*(ptr->cha++);
ptr=ptr->next;
}
getch();
}