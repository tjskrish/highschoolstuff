#include<iostream.h>
#include<all.h>
#include<process.h>
#include<graphics.h>
#include<conio.h>
union REGS in,out;

       int callmouse()
       {
              in.x.ax=1;
              int86(51,&in,&out);
	     return 1;
       }
       void mouseposi(int &xpos,int &ypos,int &click)
       { 
	     in.x.ax=3;
	     int86(51,&in,&out);
	     click=out.x.bx;
	     xpos=out.x.cx;
	     ypos=out.x.dx;
        }
       int mousehide()
       {
              in.x.ax=2;
	     int86(51,&in,&out);
              return 1;
       }
      void setposi(int &xpos,int &ypos)
      { 
             in.x.ax=4;
             in.x.cx=xpos;
	    in.x.dx=ypos;
             int86(51,&in,&out);
      }
	void restrictmouseptr(int x1,int y1,int x2,int y2)
	 {
                 in.x.ax=7;
	        in.x.cx=x1;
                 in.x.dx=x2;
                 int86(51,&in,&out);
                 in.x.ax=8;
                 in.x.cx=y1;
                 in.x.dx=y2;
                 int86(51,&in,&out);
	 }

void main()
{             restrictmouseptr(0,0,500,400);
setposi(300,300);
int detect=DETECT,mode,style=1;
initgraph(&detect,&mode,"c:\\tc\\bgi");
settextstyle(style, HORIZ_DIR,2);
 setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");

   int s=-1,ma,mq,cl,ts=-1,tx,ty;
char ch;   callmouse();
while(1)
{
while(kbhit()==0)
{
mouseposi(ma,mq,cl);
if(ma>280 && ma<280+textwidth("1.BASICS") && mq>120 && mq<120+textheight("1.BASICS"))
{ts=s;s=0;}
if(ma>343 && ma<343+textwidth("1.GAME") && mq>170 && mq<170+textheight("1.GAME"))
{ts=s;s=1;}
if(ma>360 && ma<360+textwidth("1.SPEED") && mq>230 && mq<230+textheight("1.SPEED"))
{ts=s;s=2;}
if(ma>330 && ma<330+textwidth("1.EXIT") && mq>305 && mq<305+textheight("1.EXIT"))
{ts=s;s=3;}
switch(s)
{
case 0:
switch(ts)
{
case 1:
settextstyle(style, HORIZ_DIR,2);
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
break;
case 2:
settextstyle(style, HORIZ_DIR,2);
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
break;
case 3:
settextstyle(style, HORIZ_DIR,2);
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
settextstyle(style, HORIZ_DIR,5);
setcolor(BLACK);
outtextxy(200,210,"EXIT");
break;
}
settextstyle(style, HORIZ_DIR,5);
setcolor(YELLOW);
outtextxy(200,210,"BASICS");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,2);
outtextxy(280,120,"1.BASICS");
break;
case 1:
switch(ts)
{
case 0:
settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"BASICS");
break;
case 2:
settextstyle(style, HORIZ_DIR,2);
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
break;
case 3:
settextstyle(style, HORIZ_DIR,2);
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
settextstyle(style, HORIZ_DIR,5);
setcolor(BLACK);
outtextxy(200,210,"EXIT");
break;
}
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(343,170,"2.GAME");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
break;
case 2:
switch(ts)
{
case 0:
settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"BASICS");
break;
case 1:
settextstyle(style, HORIZ_DIR,2);
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
break;
case 3:
settextstyle(style, HORIZ_DIR,2);
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"EXIT");
break;
}
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(360,230,"3.SPEED");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
break;
case 3:
switch(ts)
{
case 0:
settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"BASICS");
break;
case 1:
settextstyle(style, HORIZ_DIR,2);
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
break;
case 2:
settextstyle(style, HORIZ_DIR,2);
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
break;
}
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(330,305,"4.EXIT");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"EXIT");

break;
}
}
if(s==-1)
s=0;
switch(s)
{
case 0:
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(280,120,"1.BASICS");
settextstyle(style, HORIZ_DIR,5);
setcolor(YELLOW);
outtextxy(200,210,"BASICS");
break;
case 1:
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(343,170,"2.GAME");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
break;
case 2:
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(360,230,"3.SPEED");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
break;
case 3:
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(330,305,"4.EXIT");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"EXIT");
break;
}
ch=getch();
switch(ch)
{
case 'P':
switch(s)
{
case 0:
settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
settextstyle(style, HORIZ_DIR,5);
setcolor(BLACK);
outtextxy(200,210,"BASICS");
break;
case 1:
settextstyle(style, HORIZ_DIR,2);
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
break;
case 2:
settextstyle(style, HORIZ_DIR,2);
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
break;
case 3:
settextstyle(style, HORIZ_DIR,2);
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"EXIT");
break;
}
s=(s+1)%3;
break;

case 'H':
switch(s)
{
case 0:setcolor(WHITE);outtextxy(100,100,"a");break;
case 1:setcolor(WHITE);outtextxy(100,120,"b");break;
case 2:setcolor(WHITE);outtextxy(100,140,"c");break;
}
s=s--;if(s<0)s=2;
break;
//default:exit(0);
}
}


}