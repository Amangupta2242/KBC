/****************************************************************************
/////////////////////////////About ///////////////////////////////////////////
		    Army Public School,Sriganganagar
Made by : Aman Gupta (PCM)
	: Akash Nagraj (PCB)
Class   : 11 Science
Subject : Computer Science (C++)

    *************** Submitted to Mrs Jagdeep Sir ***********************
*/
////////////////////////////////Header files ////////////////////////////////
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<stdio.h>
int f=0,p=0,o=0;
///////////////////////logo///////////////////////////////////////////
void logo()
{
  setbkcolor(LIGHTBLUE);
  setcolor(WHITE);
  arc(250,150,87,360,60);//long g  1
  arc(250,150,100,225,50);//A side 2
  arc(250,150,86,90,50);//A top    3
  arc(250,150,235,308,50);//A down 4
  arc(250,150,318,349,50);//G side 5
  line(235,150,268,150);//A down slant
  line(275,150,300,150);//g end side
      line(300,150,300,90 );
      line(310,150,310,100);
      line(310,100,350,200);
      line(300,90,320,90);
      line(320,90,360,185);
      line(350,200,370,200);
      line(360,185,360,90);
      line(360,90,370,90);
      line(370,200,370,90);
    //arc(300,300,100,50,90);
  line(232,160,270,160);
  line(278,160,300,160);
  line(242,100,215,185);
  line(255,90,274,150);
  line(278,160,286,184);
  line(254,100,268,150);
  line(270,160,280,190);
  line(250,100,235,150);
  line(231,160,221,190);

   char msg[100];
   settextstyle(7, HORIZ_DIR,7); //4//7//10
   sprintf(msg,"AGN Games");
   outtextxy(130,250, msg);
   settextstyle(1, HORIZ_DIR,3);
   sprintf(msg,"Loading. . . . . . . .");
   outtextxy(190,380, msg);
   rectangle(200,350,400,370);
  for(int i=200;i<=400;i++)
  {
   bar(200,350,i,370);
   if(i<=300)
   {delay(50);}
   if((i>300)&&(i<=380))
   {delay(75);}
   if((i>380)&&(i<=410))
   {delay(50);}
  }
}

////////////////////////////////////Start///////////////////////////////////
void start()
{
  clrscr();
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  ////////////////////////////////Left/////////////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(120,130,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(120,130,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(90,90, msg);
  setcolor(14);
  for(int h=165;h<=180;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(122,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(122,176+i,25,65,55,15);
   ellipse(122,175+i,125,155,55,15);
   b:
  }
  ///////////////////////////////////Right/////////////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int t=0;t<40;t++)
  {
   circle(520,130,t);
  }
  for(int d=42;d<50;d++)
  {
   circle(520,130,d);
  }
  setcolor(6);
  char msgr[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msgr,"$$");
  outtextxy(490,90, msgr);
  setcolor(14);
  for(int f=165;f<=180;f++)
  {
   if(f%3==0)
   {
    goto j;
   }
   ellipse(522,f,200,335,55,15);
   j:
  }
  for(int p=0;p<7;p++)
  {
   if(p%3==0)
   {
    goto m;
   }
   ellipse(522,176+p,25,65,55,15);
   ellipse(522,175+p,125,155,55,15);
   m:
  }
  ////////////////////////////////name//////////////////////////////////////
  setcolor(14);
  char m[100];
  settextstyle(1, HORIZ_DIR,8);
  sprintf(m,"K.B.C");
  outtextxy(225,80, m);
  settextstyle(7, HORIZ_DIR,2);
  sprintf(m,"Kaun Banega Crorepati");
  outtextxy(195,160, m);
  settextstyle(4, HORIZ_DIR,11);
  sprintf(m,"?");
  outtextxy(290,190, m);
  settextstyle(4, HORIZ_DIR,8);
  sprintf(m,"?");
  outtextxy(240,200, m);
  settextstyle(4, HORIZ_DIR,8);
  sprintf(m,"?");
  outtextxy(365,200, m);
 settextstyle(7,0,3);
  sprintf(m,"Made by Aman Gupta");
  outtextxy(310,320, m);
  sprintf(m,"Akash Nagraj");
  outtextxy(420,350, m);
  settextstyle(7,0,3);
  sprintf(m,"XI Computer Science");
  outtextxy(305,380, m);
  settextstyle(7,0,2);
  sprintf(m,"Special Thanks to: Jagdeep Sir");
  outtextxy(300,410, m);
}
/////////////////////////////////Rules///////////////////////////
void rule()
{
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
 setbkcolor(RED);
 char msg[100];
 settextstyle(7,0,5);
 sprintf(msg,"Rules");
 outtextxy(250,20, msg);
 settextstyle(7,0,1);
 sprintf(msg,"1. There are Total 10 level with Different Amounts having ");
 outtextxy(25,100, msg);
 settextstyle(7,0,1);
 sprintf(msg,"Different Question with 4 Different Options with 1 Right  ");
 outtextxy(45,125, msg);
 settextstyle(7,0,1);
 sprintf(msg,"Answer. ");
 outtextxy(45,150, msg);
 sprintf(msg,"2. You have 3 Life lines which you can use as follow :");
 outtextxy(25,175, msg);
 sprintf(msg,"(i) 50::50");
 outtextxy(50,200, msg);
 sprintf(msg,"(ii) Double Dip");
 outtextxy(50,225, msg);
 sprintf(msg,"(iii) Public Vote");
 outtextxy(50,250, msg);
 sprintf(msg,"3. On Using Double Dip (Its Occurs will not be Shown to ");
 outtextxy(25,275, msg);
 sprintf(msg,"you) If you Enter Wrong Answer then it Show Answer ");
 outtextxy(45,300, msg);
 sprintf(msg,"Option Once Again.");
 outtextxy(45,325, msg);
 sprintf(msg,"4. Don't use Two or more life line at a time it will  ");
 outtextxy(25,350, msg);
 sprintf(msg,"raise to an Internal Problem.");
 outtextxy(45,375, msg);
 sprintf(msg,"5. Don't Enter Key Before you are Asked ");
 outtextxy(25,400, msg);
 sprintf(msg,"Enter any Key..........");
 outtextxy(450,450, msg);
 getch();
}
/////////////////////////////graph///////////////////////////////////////////
void ga()
{  char msg[100];
  rectangle(10,10,150,100);//graph in
  rectangle(10,10,170,100);//graph out
  bar(40,20,150,30);//a
  bar(90,40,150,50);//b                     //for option a
  bar(105,60,150,70);//c
  bar(85,80,150,90);//d
  settextstyle(1,0,1);
  sprintf(msg," A");
  outtextxy(145,15, msg);
  sprintf(msg," B");
  outtextxy(145,35, msg);
  sprintf(msg," C");
  outtextxy(145,55, msg);
  sprintf(msg," D");
  outtextxy(145,75, msg);
}
////////////////////
void gb()
{  char msg[100];
  rectangle(10,10,150,100);//graph in
  rectangle(10,10,170,100);//graph out
  bar(90,20,150,30);//a
  bar(40,40,150,50);//b
  bar(105,60,150,70);//c
  bar(85,80,150,90);//d                     //for option b
  settextstyle(1,0,1);
  sprintf(msg," A");
  outtextxy(145,15, msg);
  sprintf(msg," B");
  outtextxy(145,35, msg);
  sprintf(msg," C");
  outtextxy(145,55, msg);
  sprintf(msg," D");
  outtextxy(145,75, msg);
}
/////////////////////////////////////
void gc()
{ char msg[100];
  rectangle(10,10,150,100);//graph in
  rectangle(10,10,170,100);//graph out
  bar(105,20,150,30);//a
  bar(90,40,150,50);//b
  bar(40,60,150,70);//c                         //for option c
  bar(85,80,150,90);//d
  settextstyle(1,0,1);
  sprintf(msg," A");
  outtextxy(145,15, msg);
  sprintf(msg," B");
  outtextxy(145,35, msg);
  sprintf(msg," C");
  outtextxy(145,55, msg);
  sprintf(msg," D");
  outtextxy(145,75, msg);
}
//////////////////////////////////////
void gd()
{ char msg[100];
  rectangle(10,10,150,100);//graph in
  rectangle(10,10,170,100);//graph out
  bar(85,20,150,30);//a
  bar(105,40,150,50);//b                     //for option d
  bar(95,60,150,70);//c
  bar(40,80,150,90);//d
  settextstyle(1,0,1);
  sprintf(msg," A");
  outtextxy(145,15, msg);
  sprintf(msg," B");
  outtextxy(145,35, msg);
  sprintf(msg," C");
  outtextxy(145,55, msg);
  sprintf(msg," D");
  outtextxy(145,75, msg);
}
void fab()
{
  bar(20,275,230,325);//a
  bar(260,275,470,325);//b
}
void fac()
{
  bar(20,275,230,325);//a
  bar(20,350,230,400);//c
}
void fad()
{
  bar(20,275,230,325);//a
  bar(260,350,470,400);//d
}
void fbc()
{
  bar(260,275,470,325);//b
  bar(20,350,230,400);//c
}
void fbd()
{
  bar(260,275,470,325);//b
  bar(260,350,470,400);//d
}
void fcd()
{
  bar(20,350,230,400);//c
  bar(260,350,470,400);//d
}
void ques()
{
  char msg[100];
  setbkcolor(1);
  rectangle(0,0,638,475);
  setcolor(GREEN);
  setcolor(15);
  rectangle(520,10,630,410);//level
  rectangle(180,10,465,100);//life line
  rectangle(10,10,170,100);//graph
  setcolor(GREEN);
  settextstyle(1,0,3); //graph
  sprintf(msg,"Graph:");
  outtextxy(15,15, msg);
  setcolor(15);
  line(0,430,638,430); //Answer
  line(520,40,630,40); //level
  line(290,10,290,100);//life line
  /////////////////////////level/////////////////////////////
  rectangle(530,349,620,375);//10,000
  rectangle(530,250,620,225);//3.2 lakhs
  rectangle(530,99,620,125);//1 crore
  setcolor(14);
  settextstyle(1,0,2);
  sprintf(msg,"Level:");
  outtextxy(525,15, msg);
  settextstyle(7,0,1);
  sprintf(msg,"10 Crore");
  outtextxy(540,50, msg);
  sprintf(msg,"5 Crore");
  outtextxy(540,75, msg);
  sprintf(msg,"1 Crore");
  outtextxy(540,100, msg);
  sprintf(msg,"50 Lac");
  outtextxy(540,125, msg);
  sprintf(msg,"25 Lac");
  outtextxy(540,150, msg);
  settextstyle(7,0,1);
  sprintf(msg,"12 Lac");
  outtextxy(540,175, msg);
  settextstyle(7,0,1);
  sprintf(msg,"6.4 Lac");
  outtextxy(540,200, msg);
  settextstyle(7,0,1);
  sprintf(msg,"3.2 Lac");
  outtextxy(540,225, msg);
  settextstyle(7,0,1);
  sprintf(msg,"1.6 Lac.");
  outtextxy(540,250, msg);
  settextstyle(7,0,1);
  sprintf(msg,"80,000");
  outtextxy(540,275, msg);
  settextstyle(7,0,1);
  sprintf(msg,"40,000");
  outtextxy(540,300, msg);
  settextstyle(7,0,1);
  sprintf(msg,"20,000");
  outtextxy(540,325, msg);
  settextstyle(7,0,1);
  sprintf(msg,"10,000");
  outtextxy(540,350, msg);
  settextstyle(7,0,1);
  sprintf(msg,"5,000");
  outtextxy(540,375, msg);
  /////////////////////////////////life line/////////////////////////
  setcolor(BROWN);
  settextstyle(6,0,3);
  sprintf(msg,"Life Line : ");
  outtextxy(190,15, msg);
  settextstyle(6,0,1);
  sprintf(msg,"* 50::50      ' F '");
  outtextxy(300,15, msg);
  settextstyle(6,0,1);
  sprintf(msg,"* Public Vote  ' P '");
  outtextxy(300,40, msg);
  settextstyle(6,0,1);
  sprintf(msg,"* Double Dip   ' O '");
  outtextxy(300,65, msg);
  //////////////////////////Answer///////////////////////////////
  setcolor(GREEN);
  settextstyle(6,0,4);
  sprintf(msg,"Enter the Answer : ");
  outtextxy(15,430, msg);
  setcolor(RED);
  settextstyle(6,0,4);
  sprintf(msg,"Exit:'E' ");
  outtextxy(550,430, msg);
}
void lose1()
{
 int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
 char msg[100];
  setbkcolor(0);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Lose ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(150,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"\"0\" Rupees");
  outtextxy(150,300, msg);
  sleep(5);
  exit(0);
}
void lose2()
{
 int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  char msg[100];
  setbkcolor(0);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Lose ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(150,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"\"10,000\" Rupees");
  outtextxy(100,300, msg);
  sleep(5);
  exit(0);
}
void lose3()
{
 int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  char msg[100];
  setbkcolor(0);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Lose ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(150,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"\"3.2 Lac.\" Rupees");
  outtextxy(100,300, msg);
  sleep(5);
  exit(0);
}
void lose4()
{
 int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  char msg[100];
  setbkcolor(0);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Lose ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(150,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"\"1 Crore\" Rupees");
  outtextxy(100,300, msg);
  sleep(5);
  exit(0);
}
//**************************Question 1***************************************
void q1s()
{
////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(120,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(120,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(90,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(122,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(122,246+i,25,65,55,15);
   ellipse(122,245+i,125,155,55,15);
   b:
  }
/////////////////////////////Question name/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Your  ");
  outtextxy(200,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Question For ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"5,000 is...... ");
  outtextxy(200,300, msg);
}
/////////////////////////////graph///////////////////////////////////////////
void won1()
{

 int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(90,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(90,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(60,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(92,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(92,246+i,25,65,55,15);
   ellipse(92,245+i,125,155,55,15);
   b:
  }

/////////////////////////////Title/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Congratulation ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"5,000  ");
  outtextxy(250,300, msg);
}
void end1()
{
 int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
 char msg[100];
  setbkcolor(0);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Lose ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(150,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"\"0\" Rupees");
  outtextxy(150,300, msg);
  sleep(5);
  exit(0);
}
void q1s1()
{
 int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
f:
  ques();
  char msg[100];
  settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,375, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  j:
  settextstyle(7,0,3);
  sprintf(msg,"Question: How many Bits Combine to");
  outtextxy(15,125, msg);
  sprintf(msg,"  Form 1 Kilo Byte ? ");
  outtextxy(135,160, msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: 8 Bit");
  outtextxy(25,277, msg);
  sprintf(msg,"B: 1024 Bit");
  outtextxy(265,277, msg);
  sprintf(msg,"C: 32 Bit");
  outtextxy(25,353, msg);
  sprintf(msg,"D: 8192 Bit");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end1();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gd();
    sleep(5);
    goto f;

   }
    else
    {

     lose1();
    }
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fac();
    goto j;

   }
   else
    {
    lose1();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='d')||(a=='D'))
    {
     won1();
    }
    else
    {
    goto j;
    }

   }
    else
    {
    lose1();}
  }
  if((a=='d')||(a=='D'))
  {
   won1();
  }
  else
  {
   lose1();
  }
}
void q1s2()
{ q:
  ques();
  char msg[100];
    settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,375, msg);
 setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  w:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Which of these National");
  outtextxy(15,125, msg);
  sprintf(msg,"  Animal of India? ");
  outtextxy(135,160, msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: Camelus");
  outtextxy(25,277, msg);
  settextstyle(7,0,2);
  sprintf(msg,"B: Panthera");
  outtextxy(265,277, msg);
  sprintf(msg,"   tigris");
  outtextxy(265,295, msg);
  sprintf(msg,"C: Rhinocers ");
  outtextxy(25,353, msg);
  sprintf(msg,"   unicornis");
  outtextxy(25,370, msg);
  settextstyle(7,0,3);
  sprintf(msg,"D: Canis");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end1();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gb();
    sleep(5);
    goto q;

   }
    else
    {
    lose1();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fad();
    goto w;

   }
   else
    {
    lose1();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='b')||(a=='B'))
    {
     won1();
    }
    else
    {
    goto w;
    }

   }
    else
    {
    lose1();}
  }
  if((a=='b')||(a=='B'))
  {
   won1();
  }
  else
  {
   lose1();
  }
}

void q1s3()
{ t:
  ques();
  char msg[100];
     settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,375, msg);
setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  u:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Which of these is the ");
  outtextxy(15,125, msg);
  sprintf(msg,"  National bird of India ? ");
  outtextxy(135,160, msg);
  settextstyle(7,0,2);
  sprintf(msg,"A: Great Indian");
  outtextxy(25,277, msg);
  sprintf(msg,"   Bustard");
  outtextxy(25,295, msg);
  settextstyle(7,0,3);
  sprintf(msg,"B: Eagle");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Peacock");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Sapprow");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end1();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gc();
    sleep(5);
    goto t;

   }
    else
    {
    lose1();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fbd();
    goto u;

   }
   else
    {
    lose1();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='c')||(a=='C'))
    {
     won1();
    }
    else
    {
    goto u;
    }

   }
    else
    {
    lose1();}
  }
  if((a=='c')||(a=='C'))
  {
   won1();
  }
  else
  {
   lose1();
  }
}

void q1s4()
{ g:
  ques();
   char msg[100];
   settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,375, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  h:
  settextstyle(7,0,3);
  sprintf(msg,"Question: What is the Currency of ");
  outtextxy(15,125, msg);
  sprintf(msg,"  India ? ");
  outtextxy(135,160, msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: Rupees");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Paisa");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Dollar");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Euro");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end1();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    ga();
    sleep(5);
    goto g;

   }
    else
    {
    lose1();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fcd();
    goto h;

   }
   else
    {
    lose1();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   {++o;
    a=getch();
    if((a=='a')||(a=='A'))
    {
     won1();
    }
    else
    {
    goto h;
    }
   }
    else
    {
    lose1();}
  }
  if((a=='a')||(a=='A'))
  {
   won1();
  }
  else
  {
   lose1();
  }
}

void q1()
{
  q1s();
  sleep(3);
  cleardevice();
  int q=0;
  randomize();
  q=(rand()%4+1);
  switch(q)
  {
   case 1:q1s1();
	  break;
   case 2:q1s2();
	  break;
   case 3:q1s3();
	  break;
   case 4:q1s4();
	  break;
  }
}
//*********************************End of Question 1******************
//**************************Question 2***************************************
void q2s()
{
  cleardevice();
 ///////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(120,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(120,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(90,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(122,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(122,246+i,25,65,55,15);
   ellipse(122,245+i,125,155,55,15);
   b:
  }
/////////////////////////////Question name/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Your  ");
  outtextxy(200,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Question For ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"10,000 is...... ");
  outtextxy(200,300, msg);
}
/////////////////////////////graph///////////////////////////////////////////
void won2()
{
  cleardevice();
  ////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(90,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(90,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(60,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(92,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(92,246+i,25,65,55,15);
   ellipse(92,245+i,125,155,55,15);
   b:
  }

/////////////////////////////Title/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Congratulation ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"10,000  ");
  outtextxy(250,300, msg);

}
void end2()
{
  cleardevice();
  char msg[100];
  setbkcolor(0);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Lose ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(150,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"\"5,000\" Rupees");
  outtextxy(100,300, msg);
  sleep(5);
  exit(0);
}
void q2s1()
{ f:
  ques();
  char msg[100];
  settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,350, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  j:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Which of these is a  ");
  outtextxy(15,125, msg);
   settextstyle(7,0,2);
  sprintf(msg," swimming event for the Olympic games? ");
  outtextxy(15,160, msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: Single Scull");
  outtextxy(25,277, msg);
  sprintf(msg,"   Men");
  outtextxy(25,295, msg);
  sprintf(msg,"B:10m Platform ");
  outtextxy(265,277, msg);
  sprintf(msg,"C: 10km  ");
  outtextxy(25,353, msg);
  sprintf(msg,"  Marathon");
  outtextxy(25,370, msg);
  sprintf(msg,"D: Omnium ");
  outtextxy(265,353, msg);
  sprintf(msg,"   Women");
  outtextxy(265,370, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end2();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gc();
    sleep(5);
    goto f;

   }
    else
    {

     lose1();
    }
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fad();
    goto j;

   }
   else
    {
    lose1();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='c')||(a=='C'))
    {
     won2();
    }
    else
    {
    goto j;
    }

   }
    else
    {
    lose1();}
  }
  if((a=='c')||(a=='C'))
  {
   won2();
  }
  else
  {
   lose1();
  }
}
void q2s2()
{ q:
  ques();
  char msg[100];
    settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,350, msg);
 setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  w:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Which of folowing is first ");
  outtextxy(15,125, msg);
  sprintf(msg,"Prime Minister is born After  ");
  outtextxy(100,160, msg);
  sprintf(msg,"Independent ?");
  outtextxy(100,195, msg);
  sprintf(msg,"A: Rajiv Gandhi");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Manmohan ");
  outtextxy(265,277, msg);
  sprintf(msg,"   Singh");
  outtextxy(265,295, msg);
  sprintf(msg,"C: Narendra ");
  outtextxy(25,353, msg);
  sprintf(msg,"   Modi");
  outtextxy(25,370, msg);
  sprintf(msg,"D: Rahul Gandhi");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end2();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gc();
    sleep(5);
    goto q;

   }
    else
    {
    lose1();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fad();
    goto w;

   }
   else
    {
    lose1();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='c')||(a=='C'))
    {
     won2();
    }
    else
    {
    goto w;
    }

   }
    else
    {
    lose1();}
  }
  if((a=='c')||(a=='C'))
  {
   won2();
  }
  else
  {
   lose1();
  }
}

void q2s3()
{ t:
  ques();
  char msg[100];
     settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,350, msg);
setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  u:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Aleoveli & Brochoi are the  ");
  outtextxy(15,125, msg);
  sprintf(msg," part which System ? ");
  outtextxy(135,160, msg);
  settextstyle(7,0,2);
  sprintf(msg,"A: Respiratory");
  outtextxy(25,277, msg);
  settextstyle(7,0,3);
  sprintf(msg,"B: Reproductive ");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Nervous ");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Digestive");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end2();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    ga();
    sleep(5);
    goto t;

   }
    else
    {
    lose1();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fcd();
    goto u;

   }
   else
    {
    lose1();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='a')||(a=='A'))
    {
     won2();
    }
    else
    {
    goto u;
    }

   }
    else
    {
    lose1();}
  }
  if((a=='a')||(a=='A'))
  {
   won2();
  }
  else
  {
   lose1();
  }
}

void q2s4()
{ g:
  ques();
   char msg[100];
   settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,350, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  h:
  settextstyle(7,0,3);
  sprintf(msg,"Question: The Ruler of these Kingdom   ");
  outtextxy(15,125, msg);
  sprintf(msg,"     was called Rana or MahaRana? ");
  outtextxy(15,160, msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: Jaipur");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Delhi");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Junanagar");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Mevar");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end2();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gd();
    sleep(5);
    goto g;

   }
    else
    {
    lose1();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fbc();
    goto h;

   }
   else
    {
    lose1();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   {++o;
    a=getch();
    if((a=='d')||(a=='D'))
    {
     won2();
    }
    else
    {
    goto h;
    }
   }
    else
    {
    lose1();}
  }
  if((a=='d')||(a=='D'))
  {
   won2();
  }
  else
  {
   lose1();
  }
}

void q2()
{
  q2s();
  sleep(3);
  cleardevice();
  int q=0;
  randomize();
  q=(rand()%4+1);
  switch(q)
  {
   case 1:q2s1();
	  break;
   case 2:q2s2();
	  break;
   case 3:q2s3();
	  break;
   case 4:q2s4();
	  break;
  }
}
//*********************************End of Question 2******************
//**************************Question 3***************************************
void q3s()
{ cleardevice();
  ////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(120,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(120,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(90,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(122,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(122,246+i,25,65,55,15);
   ellipse(122,245+i,125,155,55,15);
   b:
  }
/////////////////////////////Question name/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Your  ");
  outtextxy(200,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Question For ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"20,000 is...... ");
  outtextxy(200,300, msg);
}
/////////////////////////////graph///////////////////////////////////////////
void won3()
{
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  ////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(90,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(90,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(60,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(92,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(92,246+i,25,65,55,15);
   ellipse(92,245+i,125,155,55,15);
   b:
  }
   ///////////////////////////////

/////////////////////////////Title/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Congratulation ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"20,000  ");
  outtextxy(200,300, msg);
}
void end3()
{  char msg[100];
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  setbkcolor(0);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Lose ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(150,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"\"10,000\" Rupees");
  outtextxy(100,300, msg);
  sleep(5);
  exit(0);
}

void q3s1()
{ f:
  ques();
  char msg[100];
  settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,325, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  j:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Which of these seed can ");
  outtextxy(15,125, msg);
  sprintf(msg,"  classified as Tilhan ? ");
  outtextxy(15,160, msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: Millet");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Soya bean");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Barley ");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Maize");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end3();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gb();
    sleep(5);
    goto f;

   }
    else
    {

     lose2();
    }
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fcd();
    goto j;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='b')||(a=='B'))
    {
     won3();
    }
    else
    {
    goto j;
    }

   }
    else
    {
    lose3();}
  }
  if((a=='b')||(a=='B'))
  {
   won3();
  }
  else
  {
   lose2();
  }
}
void q3s2()
{ q:
  ques();
  char msg[100];
    settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,325, msg);
 setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  w:
  settextstyle(7,0,3);
  sprintf(msg,"Question: In ramayan which was the ");
  outtextxy(15,125, msg);
  sprintf(msg,"         only ornament of sita that ");
  outtextxy(15,160, msg);
  sprintf(msg,"         lakshman recognised ?");
  outtextxy(15,195,msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: Chudamani");
  outtextxy(25,277, msg);
  settextstyle(7,0,2);
  sprintf(msg,"B: Bracelet");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Anklet ");
  outtextxy(25,353, msg);
  settextstyle(7,0,3);
  sprintf(msg,"D: Earring ");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end3();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gc();
    sleep(5);
    goto q;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fbd();
    goto w;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='c')||(a=='C'))
    {
     won3();
    }
    else
    {
    goto w;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='c')||(a=='C'))
  {
   won3();
  }
  else
  {
   lose2();
  }
}

void q3s3()
{ t:
  ques();
  char msg[100];
     settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,325, msg);
setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  u:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Which of these gas is ");
  outtextxy(15,125, msg);
  sprintf(msg,"  named from its colour ? ");
  outtextxy(15,160, msg);
  settextstyle(7,0,2);
  sprintf(msg,"A: Helium");
  outtextxy(25,277, msg);
  settextstyle(7,0,3);
  sprintf(msg,"B: Methane");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Oxygen");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Chlorine");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end3();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gd();
    sleep(5);
    goto t;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fbc();
    goto u;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='d')||(a=='D'))
    {
     won3();
    }
    else
    {
    goto u;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='d')||(a=='D'))
  {
   won3();
  }
  else
  {
   lose2();
  }
}

void q3s4()
{ g:
  ques();
   char msg[100];
   settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,325, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  h:
  settextstyle(7,0,3);
  sprintf(msg,"Question: What of these snake is");
  outtextxy(15,125, msg);
  sprintf(msg,"  derived from portuguese word ");
  outtextxy(15,160, msg);
  sprintf(msg,"  meaning snake with a hood ?");
  outtextxy(15,195, msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: Python");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Russell viper");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Krait");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Cobra");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end3();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gd();
    sleep(5);
    goto g;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fbc();
    goto h;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   {++o;
    a=getch();
    if((a=='d')||(a=='D'))
    {
     won3();
    }
    else
    {
    goto h;
    }
   }
    else
    {
    lose2();}
  }
  if((a=='d')||(a=='D'))
  {
   won3();
  }
  else
  {
   lose2();
  }
}

void q3()
{  cleardevice();
  q3s();
  sleep(3);
  cleardevice();
  int q=0;
  randomize();
  q=(rand()%4+1);
  switch(q)
  {
   case 1:q3s1();
	  break;
   case 2:q3s2();
	  break;
   case 3:q3s3();
	  break;
   case 4:q3s4();
	  break;
  }
}
//*********************************End of Question 3******************
//**************************Question 4***************************************
void q4s()
{
////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(120,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(120,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(90,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(122,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(122,246+i,25,65,55,15);
   ellipse(122,245+i,125,155,55,15);
   b:
  }
/////////////////////////////Question name/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Your  ");
  outtextxy(200,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Question For ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"40,000 is...... ");
  outtextxy(200,300, msg);
}
/////////////////////////////graph///////////////////////////////////////////
void won4()
{
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  ////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(90,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(90,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(60,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(92,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(92,246+i,25,65,55,15);
   ellipse(92,245+i,125,155,55,15);
   b:
  }
   ///////////////////////////////

/////////////////////////////Title/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Congratulation ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"40,000  ");
  outtextxy(200,300, msg);
}
void end4()
{  char msg[100];
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  setbkcolor(0);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Lose ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(150,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"\"20,000\" Rupees");
  outtextxy(100,300, msg);
  sleep(5);
  exit(0);
}
void q4s1()
{ f:
  ques();
  char msg[100];
  settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,300, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  j:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Which of these rulers were ");
  outtextxy(15,125, msg);
  sprintf(msg,"        contemporaries of each other? ");
  outtextxy(15,160, msg);
  settextstyle(7,0,2);
  sprintf(msg,"A: Ashoka and");
  outtextxy(25,277, msg);
  sprintf(msg,"  Samudragupta");
  outtextxy(25,295, msg);
  sprintf(msg,"B: Harashvardana ");
  outtextxy(265,277, msg);
  settextstyle(7,0,1);
  sprintf(msg," & PrithvirajChauan");
  outtextxy(265,295, msg);
  settextstyle(7,0,2);
  sprintf(msg,"C: Pratap & Akbar ");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Humayun and");
  outtextxy(265,353, msg);
  sprintf(msg,"  Shivaji");
  outtextxy(265,370, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end4();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gc();
    sleep(5);
    goto f;

   }
    else
    {
     lose2();
    }
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fab();
    goto j;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='c')||(a=='C'))
    {
     won4();
    }
    else
    {
    goto j;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='c')||(a=='C'))
  {
   won4();
  }
  else
  {
   lose2();
  }
}
void q4s2()
{ q:
  ques();
  char msg[100];
    settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,300, msg);
 setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  w:
  settextstyle(7,0,3);
  sprintf(msg,"Question:Which of these is the  ");
  outtextxy(15,125, msg);
  sprintf(msg,"  administrative head of district ");
  outtextxy(15,160, msg);
  sprintf(msg,"  in India ?");
  outtextxy(15,195,msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: DM");
  outtextxy(25,277, msg);
  settextstyle(7,0,2);
  sprintf(msg,"B: DIG");
  outtextxy(265,277, msg);
  sprintf(msg,"C: DCP ");
  outtextxy(25,353, msg);
  settextstyle(7,0,3);
  sprintf(msg,"D: DSP ");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end4();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    ga();
    sleep(5);
    goto q;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fbd();
    goto w;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='a')||(a=='A'))
    {
     won4();
    }
    else
    {
    goto w;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='a')||(a=='A'))
  {
   won4();
  }
  else
  {
   lose2();
  }
}

void q4s3()
{ t:
  ques();
  char msg[100];
  settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,300, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  u:
  settextstyle(7,0,2);
  sprintf(msg,"Question: Pullipuram fort,considered");
  outtextxy(15,125, msg);
  sprintf(msg,"          to be one of the oldest surviving  ");
  outtextxy(15,150, msg);
  sprintf(msg,"          european monuments in india , ");
  outtextxy(15,175,msg);
  sprintf(msg,"          build by which colonial power ?");
  outtextxy(15,200,msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: Dutch");
  outtextxy(25,277, msg);
  sprintf(msg,"B: French");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Portuguese");
  outtextxy(25,353, msg);
  sprintf(msg,"D: British");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end4();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gc();
    sleep(5);
    goto t;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fad();
    goto u;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='c')||(a=='C'))
    {
     won4();
    }
    else
    {
    goto u;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='c')||(a=='C'))
  {
   won4();
  }
  else
  {
   lose2();
  }
}

void q4s4()
{ g:
  ques();
   char msg[100];
   settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,300, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  h:
  settextstyle(7,0,2);
  sprintf(msg,"Question: Rulling governer of India while");
  outtextxy(15,125, msg);
  sprintf(msg,"     the power was transfered from the");
  outtextxy(15,160, msg);
  sprintf(msg,"     eastindia comp. to hte british crown ?");
  outtextxy(15,195, msg);
  sprintf(msg,"A: Lord Lytton");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Lord Curzor");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Lord Irwin");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Lord Canning");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end4();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gd();
    sleep(5);
    goto g;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fbc();
    goto h;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   {++o;
    a=getch();
    if((a=='d')||(a=='D'))
    {
     won4();
    }
    else
    {
    goto h;
    }
   }
    else
    {
    lose2();}
  }
  if((a=='d')||(a=='D'))
  {
   won4();
  }
  else
  {
   lose2();
  }
}
void q4()
{
  q4s();
  sleep(3);
  cleardevice();
  int q=0;
  randomize();
  q=(rand()%4+1);
  switch(q)
  {
   case 1:q4s1();
	  break;
   case 2:q4s2();
	  break;
   case 3:q4s3();
	  break;
   case 4:q4s4();
	  break;
  }
}
//*********************************End of Question 4******************
//**************************Question 5***************************************
void q5s()
{
////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(120,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(120,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(90,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(122,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(122,246+i,25,65,55,15);
   ellipse(122,245+i,125,155,55,15);
   b:
  }
/////////////////////////////Question name/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Your  ");
  outtextxy(200,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Question For ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"80,000 is...... ");
  outtextxy(200,300, msg);
}
/////////////////////////////graph///////////////////////////////////////////
void won5()
{
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  ////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(90,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(90,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(60,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(92,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(92,246+i,25,65,55,15);
   ellipse(92,245+i,125,155,55,15);
   b:
  }
   ///////////////////////////////

/////////////////////////////Title/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Congratulation ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"80,000  ");
  outtextxy(220,300, msg);
}
void end5()
{  char msg[100];
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  setbkcolor(0);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Lose ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(150,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"\"40,000\" Rupees");
  outtextxy(100,300, msg);
  sleep(5);
  exit(0);
}

void q5s1()
{ f:
  ques();
  char msg[100];
  settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,275, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  j:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Which of these fabrics is");
  outtextxy(15,125, msg);
  sprintf(msg,"   named after french dressmaker ? ");
  outtextxy(15,160, msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: Chiffon");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Linen");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Crepe ");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Georgette");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end5();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gd();
    sleep(5);
    goto f;

   }
    else
    {

     lose2();
    }
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fbc();
    goto j;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='d')||(a=='D'))
    {
     won5();
    }
    else
    {
    goto j;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='d')||(a=='D'))
  {
   won5();
  }
  else
  {
   lose2();
  }
}
void q5s2()
{ q:
  ques();
  char msg[100];
    settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,275, msg);
 setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  w:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Which of these is oldest ");
  outtextxy(15,125, msg);
  sprintf(msg,"Mountain range in India ?");
  outtextxy(130,160, msg);
  settextstyle(7,0,3);
  sprintf(msg,"A: Nilgiris");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Aravalli");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Vindhya");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Satpura ");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end5();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gb();
    sleep(5);
    goto q;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fcd();
    goto w;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='b')||(a=='B'))
    {
     won5();
    }
    else
    {
    goto w;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='b')||(a=='B'))
  {
   won5();
  }
  else
  {
   lose2();
  }
}

void q5s3()
{ t:
  ques();
  char msg[100];
     settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,275, msg);
setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  u:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Who is the only mp in the");
  outtextxy(15,125, msg);
  sprintf(msg," current lokshaba,who is ");
  outtextxy(135,160, msg);
  sprintf(msg,"also a Olympic medalist ?");
  outtextxy(135,195,msg);
  settextstyle(7,0,2);
  sprintf(msg,"A: Abhinay Bindra");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Karnam ");
  outtextxy(265,277, msg);
  sprintf(msg,"   Maheshwari");
  outtextxy(265,295, msg);
  sprintf(msg,"C: Rajyavardan ");
  outtextxy(25,353, msg);
  sprintf(msg,"   Singh Rathor");
  outtextxy(25,370, msg);
  sprintf(msg,"D: Gagan Narang");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end5();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gc();
    sleep(5);
    goto t;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fab();
    goto u;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='c')||(a=='C'))
    {
     won5();
    }
    else
    {
    goto u;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='c')||(a=='C'))
  {
   won5();
  }
  else
  {
   lose2();
  }
}

void q5s4()
{ g:
  ques();
   char msg[100];
   settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,275, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  h:
  settextstyle(7,0,3);
  sprintf(msg,"Question: Field medal is a prestigious");
  outtextxy(15,125, msg);
  sprintf(msg,"international honour given ");
  outtextxy(135,160, msg);
  sprintf(msg,"in which subject ?");
  outtextxy(135,195, msg);
  sprintf(msg,"A: Lifescience");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Mathematics");
  outtextxy(265,277, msg);
  sprintf(msg,"C: History");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Astronomy");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end5();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gb();
    sleep(5);
    goto g;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fac();
    goto h;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   {++o;
    a=getch();
    if((a=='b')||(a=='B'))
    {
     won5();
    }
    else
    {
    goto h;
    }
   }
    else
    {
    lose2();}
  }
  if((a=='b')||(a=='B'))
  {
   won5();
  }
  else
  {
   lose2();
  }
}

void q5()
{
  q5s();
  sleep(3);
  cleardevice();
  int q=0;
  randomize();
  q=(rand()%4+1);
  switch(q)
  {
   case 1:q5s1();
	  break;
   case 2:q5s2();
	  break;
   case 3:q5s3();
	  break;
   case 4:q5s4();
	  break;
  }
}
//*********************************End of Question 5******************
//**************************Question 6***************************************
void q6s()
{
////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(120,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(120,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(90,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(122,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(122,246+i,25,65,55,15);
   ellipse(122,245+i,125,155,55,15);
   b:
  }
/////////////////////////////Question name/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Your  ");
  outtextxy(200,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Question For ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"1.6 Lakh is...... ");
  outtextxy(200,300, msg);
}
/////////////////////////////graph///////////////////////////////////////////
void won6()
{
  cleardevice();
  ////////////////////////////////coin//////////////////////////////
  setbkcolor(4);
  setcolor(14);
  for(int i=0;i<40;i++)
  {
   circle(90,200,i);
  }
  for(int j=42;j<50;j++)
  {
   circle(90,200,j);
  }
  setcolor(6);
  char msg[100];
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"$$");
  outtextxy(60,160, msg);
  setcolor(14);
  for(int h=235;h<=250;h++)
  {
   if(h%3==0)
   {
    goto a;
   }
   ellipse(92,h,200,335,55,15);
   a:
  }
  for(i=0;i<7;i++)
  {
   if(i%3==0)
   {
    goto b;
   }
   ellipse(92,246+i,25,65,55,15);
   ellipse(92,245+i,125,155,55,15);
   b:
  }
   ///////////////////////////////

/////////////////////////////Title/////////////////////////////////////
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"Congratulation ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(200,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"1.6 Lakh  ");
  outtextxy(200,300, msg);
}
void end6()
{  char msg[100];
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
  setbkcolor(0);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Lose ");
  outtextxy(150,100, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"You Won ");
  outtextxy(150,200, msg);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR,7);
  sprintf(msg,"\"80,000\" Rupees");
  outtextxy(100,300, msg);
  sleep(5);
  exit(0);
}

void q6s1()
{ f:
  ques();
  char msg[100];
  settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,250, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  j:
  settextstyle(7,0,2);
  sprintf(msg,"Question: Which 2 cricketers involved in a");
  outtextxy(15,125, msg);
  sprintf(msg,"      world record partership for the 10th");
  outtextxy(15,160, msg);
  sprintf(msg,"      wicket in test cricket in July 14 ?");
  outtextxy(15,195,msg);
  settextstyle(7,0,1);
  sprintf(msg,"A: C Welegedara &");
  outtextxy(25,277, msg);
  sprintf(msg,"   Ranganaherath");
  outtextxy(25,295, msg);
  sprintf(msg,"B: Imran Tahir & ");
  outtextxy(265,277, msg);
  sprintf(msg,"   Aaron Phangisio");
  outtextxy(265,295, msg);
  sprintf(msg,"C: Junaid khan &");
  outtextxy(25,353, msg);
  sprintf(msg,"   Saeed ajmil");
  outtextxy(25,370, msg);
  sprintf(msg,"D: Loe root & James ");
  outtextxy(265,353, msg);
  sprintf(msg,"    anderson");
  outtextxy(265,370, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end6();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gd();
    sleep(5);
    goto f;

   }
    else
    {

     lose2();
    }
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fbc();
    goto j;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='d')||(a=='D'))
    {
     won6();
    }
    else
    {
    goto j;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='d')||(a=='D'))
  {
   won6();
  }
  else
  {
   lose2();
  }
}
void q6s2()
{ q:
  ques();
  char msg[100];
    settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,250, msg);
 setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  w:
  settextstyle(7,0,3);
  sprintf(msg,"Question:in the tale Punarmushika");
  outtextxy(15,125, msg);
  sprintf(msg,"Bhavan which animal is turned into");
  outtextxy(15,160, msg);
  sprintf(msg,"a cat,dog & lion bt a sage ?");
  outtextxy(15,195,msg);
  sprintf(msg,"A: Elephant");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Mouse");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Squirrel");
  outtextxy(25,353, msg);
  settextstyle(7,0,3);
  sprintf(msg,"D: Frog");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end6();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gb();
    sleep(5);
    goto q;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fac();
    goto w;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='b')||(a=='B'))
    {
     won6();
    }
    else
    {
    goto w;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='b')||(a=='B'))
  {
   won6();
  }
  else
  {
   lose2();
  }
}

void q6s3()
{ t:
  ques();
  char msg[100];
     settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,250, msg);
setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  u:
  settextstyle(7,0,2);
  sprintf(msg,"Question: Sir Edmund Hillary served as");
  outtextxy(15,125, msg);
  sprintf(msg,"as which countarie's highcommissioner");
  outtextxy(15,160, msg);
  sprintf(msg,"to india , bangladesh and nepal ?");
  outtextxy(15,195,msg);
  sprintf(msg,"A: UK");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Australia");
  outtextxy(265,277, msg);
  sprintf(msg,"C: Canada");
  outtextxy(25,353, msg);
  sprintf(msg,"D: New zealand");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end6();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gd();
    sleep(5);
    goto t;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fab();
    goto u;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   { ++o;
    a=getch();
    if((a=='d')||(a=='D'))
    {
     won6();
    }
    else
    {
    goto u;
    }

   }
    else
    {
    lose2();}
  }
  if((a=='d')||(a=='D'))
  {
   won6();
  }
  else
  {
   lose2();
  }
}

void q6s4()
{ g:
  ques();
   char msg[100];
   settextstyle(7,0,3);
  sprintf(msg,"*");
  outtextxy(528,250, msg);
  setcolor(15);
  rectangle(10,120,480,250);//Question
  rectangle(20,275,230,325);//a
  rectangle(260,275,470,325);//b
  rectangle(20,350,230,400);//c
  rectangle(260,350,470,400);//d
  h:
  settextstyle(7,0,3);
  sprintf(msg,"Question: First nobel prize was ");
  outtextxy(15,125, msg);
  sprintf(msg,"awarded for the discovery of what ?");
  outtextxy(15,160, msg);
  sprintf(msg,"A: Laser");
  outtextxy(25,277, msg);
  sprintf(msg,"B: Transistor");
  outtextxy(265,277, msg);
  sprintf(msg,"C: X ray");
  outtextxy(25,353, msg);
  sprintf(msg,"D: Vacum tube");
  outtextxy(265,353, msg);
  char a;
  a=getch();
  if((a=='e')||(a=='E'))
  {
   end6();
  }
  if((a=='p')||(a=='P'))
  { if(p==0)
   {++p;
    gc();
    sleep(5);
    goto g;

   }
    else
    {
    lose2();}
  }
  if((a=='f')||(a=='F'))
  { if(f==0)
   {++f;
    fad();
    goto h;

   }
   else
    {
    lose2();}
  }
  if((a=='o')||(a=='O'))
  { if(o==0)
   {++o;
    a=getch();
    if((a=='c')||(a=='C'))
    {
     won6();
    }
    else
    {
    goto h;
    }
   }
    else
    {
    lose2();}
  }
  if((a=='c')||(a=='C'))
  {
   won6();
  }
  else
  {
   lose2();
  }
}

void q6()
{
  q6s();
  sleep(3);
  cleardevice();
  int q=0;
  randomize();
  q=(rand()%4+1);
  switch(q)
  {
   case 1:q6s1();
	  break;
   case 2:q6s2();
	  break;
   case 3:q6s3();
	  break;
   case 4:q6s4();
	  break;
  }
}
//*********************************End of Question 6******************
//////////////////////////////////
void main()
{
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");

 logo();
 cleardevice();
 start();
 sleep(5);
 cleardevice();
 rule();
 cleardevice();
 q1();
 sleep(2);
 cleardevice();
 q2();
 sleep(2);
 cleardevice();
 q3();
 sleep(2);
 cleardevice();
 q4();
 sleep(2);
 cleardevice();
 q5();
 sleep(2);
 cleardevice();
 q6();
 sleep(2);
 cleardevice();
 getch();
}