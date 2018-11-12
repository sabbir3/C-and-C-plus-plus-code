 #include<iostream.h>
  #include<conio.h>
  #include<graphics.h>
  #include<dos.h>
  #include<stdio.h>
  #include<fstream.h>
  #include<string.h>
  #include<stdlib.h>
  #include<string.h>
  char name1[25],fname1[25],cls1[15];

 class graphic
    {
     private:
        int za1x,zb1y,za2x,zb2y,zafar1;
     public:
    graphic()
      {
    za1x=1,zb1y=1,za2x=625,zb2y=469;
      }
 //////////////////////Only To Draw Bordervoid border1()
       {
       setcolor(9);
       rectangle(0,0,625,469);
       rectangle(2,2,623,467);
       rectangle(3,3,622,466);
       rectangle(4,4,621,465);
       }
///////////////////////To Draw Border And Titlevoid border()
       {
    for(zafar1=1;zafar1<4;zafar1++)
       {
       setcolor(9);
       rectangle(za1x+zafar1,zb1y+zafar1,za2x-zafar1,zb2y-zafar1);
       }
      setcolor(9);
      rectangle(0,0,626,470);
      setcolor(15);
      settextstyle(8,0,3);
      outtextxy(160,15,"Govt City High School");
      circle(455,25,7);
      settextstyle(2,0,4);
      outtextxy(453,18,"R");
      Line(180,50,425,50,4);
      setcolor(14);
      settextstyle(2,0,6);
       }

  void Line(int x1,int y1,int x2,int y2,int col)
     {
     setcolor(col);
     line(x1,y1,x2,y2);
     line(x1,y1+1,x2,y2+1);
     setcolor(0);
     line(x1,y1+2,x2,y2+2);
     line(x1,y1+3,x2,y2+3);
     setcolor(col);
     line(x1,y1+4,x2,y2+4);
     }
 ////////////////To Draw Edit Boxesvoid textfield(int x1,int y1,int x2,int y2,int col)
     {
      setcolor(0);
      setfillstyle(1,0);
      rectangle(x1,y1,x2,y2);
      floodfill(x1+2,y1+2,0);
      setcolor(col);
      rectangle(x1-1,y1-1,x2+1,y2+1);
      rectangle(x1-2,y1-2,x2+2,y2+2);
      Rectangle(x1,y1,x2,y2,0,15);
     }
 /////////////// To make 3D any Any Thingvoid Rectangle(int x1,int y1,int x2,int y2,int col1,int col2)
     {
       setcolor(col1);
       line(x1,y1,x2,y1);
       line(x1,y1,x1,y2);
       setcolor(col2);
       line(x1,y2,x2,y2);
       line(x2,y1,x2,y2);
     }

 //////////////To Make Simple Buttonsvoid button(int x1,int y1,int x2,int y2,int bt,char *txt)
     {
       settextstyle(0,0,0);
       if(bt==0)
       {
       setcolor(7);
       setfillstyle(1,7);
       rectangle(x1,y1,x2,y2);
       floodfill(x1+2,y1+2,7);
       Rectangle(x1,y1,x2,y2,15,0);
       Rectangle(x1+1,y1+1,x2-1,y2-1,15,0);
       Rectangle(x1+2,y1+2,x2-2,y2-2,15,0);
       }
       else
       {
       setcolor(7);
       setfillstyle(1,7);
       rectangle(x1,y1,x2,y2);
       floodfill(x1+2,y1+2,7);
       Rectangle(x1,y1,x2,y2,8,8);
       Rectangle(x1+1,y1+1,x2-1,y2-1,8,8);
       Rectangle(x1+2,y1+2,x2-2,y2-2,8,8);
       }
       setcolor(0);
       settextstyle(0,0,0);
       outtextxy(x1+20,y1+10,txt);
     }

  /////////////////To make Special Buttonsvoid Jbutton(int x1,int y1,int x2,int y2,int push,char *txt)
    {
    if(push==1)
    {
    setcolor(0);
    rectangle(x1-1,y1-1,x2+1,y2+1);
    Rectangle(x1,y1,x2,y2,0,15);
    Rectangle(x1+2,y1+2,x2-2,y2-2,15,0);
    Rectangle(x1+4,y1+4,x2-4,y2-4,0,15);
    }
    else
    {
    Rectangle(x1,y1,x2,y2,15,0);
    Rectangle(x1+2,y1+2,x2-2,y2-2,0,15);
    Rectangle(x1+4,y1+4,x2-4,y2-4,15,0);
    setcolor(0);
    rectangle(x1-1,y1-1,x2+1,y2+1);
    }
     setcolor(0);
     settextstyle(0,0,0);
     outtextxy(x1+13,y1+9,txt);
    }

   /////////////////////To make Radio Buttonsvoid radiobutton(int x,int y,int col1,int col2,char *txt,int chk)
      {
       int col;
       setcolor(col1);
       circle(x,y,8);
       circle(x,y,9);
       if(chk==0)
       col=14;
       else
       col=0;
       setcolor(col);
       setfillstyle(1,col);
       circle(x,y,3);
       floodfill(x,y,col);
       setcolor(col2);
       settextstyle(2,0,6);
       outtextxy(x+20,y-10,txt);
      }

 ////////////////////////// First Page Of School Buldingvoid Intro()
       {
    setcolor(4);
    setfillstyle(1,4);
    circle(433,260,112);
    floodfill(435,262,4);
    setcolor(0);
    setfillstyle(1,0);
    circle(433,260,88);
    floodfill(435,262,0);
    setcolor(15);
    circle(433,260,112);
    circle(433,260,88);
    setcolor(9);
    rectangle(0,0,625,469);
    rectangle(2,2,623,467);
    rectangle(3,3,622,466);
    rectangle(4,4,621,465);
    setcolor(4);
    setfillstyle(1,4);
    rectangle(35,270,580,410);
    floodfill(37,272,4);
    setcolor(15);
    rectangle(35,270,580,410);
     int x1,x2,y1,y2,i;
       x1=40;
       x2=60;
       y1=400;
       y2=410;
     for(i=10;i<=23;i++)
      {
      if( i%2==1)
      brickline(x1-5,y1,x2-5,y2,27);
      else
      brickline(x1,y1,x2,y2,27);
      y1=y1-10;
      y2=y2-10;
      }
     setcolor(14);
     setfillstyle(1,14);
     rectangle(35,264,580,268);
     floodfill(37,266,14);

//////////////// Fences

     setcolor(15);
     setfillstyle(8,15);
     rectangle(35,240,320,265);
     floodfill(37,242,15);
     setcolor(15);
     setfillstyle(8,15);
     rectangle(545,240,580,265);
     floodfill(547,242,15);

 //////////////////Gate
     setcolor(6);
     rectangle(341,262,527,412);
     setcolor(15);
     rectangle(342,263,526,411);
     setcolor(2);
     setfillstyle(1,2);
     circle(435,285,50);
     floodfill(437,287,2);
     setcolor(6);
     circle(435,285,51);
     setcolor(15);
     circle(435,285,52);
     setcolor(2);
     setfillstyle(1,2);
     rectangle(343,264,525,410);
     floodfill(345,266,2);
     setcolor(0);
     line(436,230,436,411);
     int x=345;
     y1=240;
     y2=264;
 setcolor(2);
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=95;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 line(x,y1,x,y2);
 x=387;
 y1=230;
 y2=260;
 x+=6;
 line(x,y1,x,y2);
 x+=6;
 y1-=4;
 line(x,y1,x,y2);
 x+=6;
 y1-=4;
 line(x,y1,x,y2);
 x+=6;
 y1-=3;
 line(x,y1,x,y2);
 x+=6;
 y1-=2;
 line(x,y1,x,y2);
 x+=6;
 y1-=1;
 line(x,y1,x,y2);
 x+=6;
 y1-=2;
 line(x,y1,x,y2);
 x+=6;
 y1-=0;
 line(x,y1,x,y2);
 x+=6;
 y1-=1;
 line(x,y1,x,y2);
 x+=6;
 y1+=1;
 line(x,y1,x,y2);
 x+=6;
 y1+=2;
 line(x,y1,x,y2);
 x+=6;
 y1+=3;
 line(x,y1,x,y2);
 x+=6;
 y1+=3;
 line(x,y1,x,y2);
 x+=6;
 y1+=4;
 line(x,y1,x,y2);
 x+=6;
 y1+=4;
 line(x,y1,x,y2);
 setcolor(0);
 settextstyle(2,0,5);
 outtextxy(355,300,"Enter To");
 outtextxy(370,320,"Learn");
 outtextxy(455,300,"Leave To");
 outtextxy(470,320,"Serve");

  /////////////// Board

   setcolor(1);
   setfillstyle(1,1);
   rectangle(100,130,250,200);
   floodfill(140,132,1);
   setcolor(7);
   rectangle(98,128,252,202);
   setcolor(7);
   line(172,202,172,240);
   line(174,202,174,240);
   setcolor(15);
   settextstyle(2,0,4);
   outtextxy(120,140,"Govt City High School");
   outtextxy(120,160,"Recognized With Board");
   outtextxy(150,180,"Of Punjab");
   setcolor(14);
   settextstyle(8,0,4);
   outtextxy(60,20,"A Beautiful Scene Of School");
     prog_bar();
     delay(1000);
     x1=30;x2=30;y1=5;y2=460;
     for(x=1;x<=20;x++)
    {
     setcolor(0);
     line(x1,y1,x2,y2);
     line(x1+20,y1,x2+20,y2);
     line(x1+40,y1,x2+40,y2);
     line(x1+60,y1,x2+60,y2);
     line(x1+80,y1,x2+80,y2);
     line(x1+100,y1,x2+100,y2);
     line(x1+120,y1,x2+120,y2);
     line(x1+140,y1,x2+140,y2);
     line(x1+160,y1,x2+160,y2);
     line(x1+180,y1,x2+180,y2);
     line(x1+200,y1,x2+200,y2);
     line(x1+220,y1,x2+220,y2);
     line(x1+240,y1,x2+240,y2);
     line(x1+260,y1,x2+260,y2);
     line(x1+280,y1,x2+280,y2);
     line(x1+300,y1,x2+300,y2);
     line(x1+320,y1,x2+320,y2);
     line(x1+340,y1,x2+340,y2);
     line(x1+360,y1,x2+360,y2);
     line(x1+380,y1,x2+380,y2);
     line(x1+400,y1,x2+400,y2);
     line(x1+420,y1,x2+420,y2);
     line(x1+440,y1,x2+440,y2);
     line(x1+460,y1,x2+460,y2);
     line(x1+480,y1,x2+480,y2);
     line(x1+500,y1,x2+500,y2);
     line(x1+520,y1,x2+520,y2);
     line(x1+540,y1,x2+540,y2);
     x1+=1;
     x2+=1;
     delay(50);
    }
    }
 /***************************/// End School Bulding///////////////////////Second Page Of Presentation.void present()
     {
     delay(1000);
     border1();
     setcolor(10);
     settextstyle(4,0,3);
     outtextxy(70,15,"A Project On School Management System");
     delay(30);
     setcolor(15);
     settextstyle(7,0,3);
     outtextxy(210,50,"Presented To ");
     delay(30);
     setcolor(4);
     settextstyle(7,0,4);
     outtextxy(150,80,"Sir Rashid Ismaiel");
     delay(30);
     setcolor(15);
     settextstyle(7,0,3);
     outtextxy(210,130,"Presented By");
     delay(30);
     setcolor(4);
     settextstyle(7,0,3);
     outtextxy(160,180,"M. Zafar Saleem");
     setcolor(11);
     settextstyle(2,0,5);
     outtextxy(370,190,"(L-423994)");
     delay(30);
     setcolor(4);
     settextstyle(7,0,3);
     outtextxy(155,220,"M. Ahsan Shazad");
     setcolor(11);
     settextstyle(2,0,5);
     outtextxy(370,230,"(L-423773)");
     delay(30);
     setcolor(7);
     settextstyle(7,0,3);
     outtextxy(105,260,"Allama Iqbal Open University");
     delay(30);
     setcolor(7);
     settextstyle(7,0,3);
     outtextxy(220,300,"Islamabad");
     delay(30);
     setcolor(10);
     settextstyle(4,0,3);
     outtextxy(210,340,"(Spring 2003) ");
     delay(30);
     setcolor(11);
     settextstyle(2,0,5);
     outtextxy(240,367,"Semester 3rd");
     delay(30);
     setcolor(12);
     settextstyle(7,0,2);
     outtextxy(120,400,"Press Any Key To Continue . . . . ");
     getch();
     delay(60);
     setcolor(0);
     settextstyle(7,0,2);
     outtextxy(120,400,"Press Any Key To Continue . . . . ");
     delay(60);
     setcolor(0);
     settextstyle(2,0,5);
     outtextxy(240,367,"Semester 3rd");
     delay(60);
     setcolor(0);
     settextstyle(4,0,3);
     outtextxy(210,340,"(Spring 2003) ");
     delay(60);
     setcolor(0);
     settextstyle(7,0,3);
     outtextxy(220,300,"Islamabad");
     delay(60);
     setcolor(0);
     settextstyle(7,0,3);
     outtextxy(105,260,"Allama Iqbal Open University");
     delay(60);
     setcolor(0);
     settextstyle(2,0,5);
     outtextxy(370,230,"(L-423773)");
     delay(60);
     setcolor(0);
     settextstyle(7,0,3);
     outtextxy(155,220,"M. Ahsan Shazad");
     delay(60);
     setcolor(0);
     settextstyle(2,0,5);
     outtextxy(370,190,"(L-423994)");
     delay(60);
     setcolor(0);
     settextstyle(7,0,3);
     outtextxy(160,180,"M. Zafar Saleem");
     delay(60);
     setcolor(0);
     settextstyle(7,0,3);
     outtextxy(210,130,"Presented By");
     delay(60);
     setcolor(0);
     settextstyle(7,0,4);
     outtextxy(150,80,"Sir Rashid Ismaiel");
     delay(60);
     setcolor(0);
     settextstyle(7,0,3);
     outtextxy(210,50,"Presented To ");
     delay(60);
     setcolor(0);
     settextstyle(4,0,3);
     outtextxy(70,15,"A Project On School Management System");
     delay(500);
    }

 //////////////////////Last Page Outrovoid outro()
  {
  cleardevice();
  graphic g;
  g.border1();
  setcolor(4);
  settextstyle(3,0,4);
  outtextxy(98,50,"School Management System");
  setcolor(14);
  settextstyle(3,0,4);
  outtextxy(100,50,"School Management System");
  settextstyle(3,0,3);
  outtextxy(50,320,"Latest Version Released On 12 October 2003");
  setcolor(1);
  line(160,377,450,377);
  line(160,378,450,378);
  line(160,379,450,379);
  line(160,380,450,380);
  setcolor(4);
  settextstyle(2,0,5);
  outtextxy(200,400,"Copyrites : zafarsaleem @ 2003");
  int c=15;
  charstring[100]="Thanks For Using This Software (Freeware Version)";
  int length=strlen(string);
  for(int x=0;x<length;x++)
     {
      gotoxy(c,8);
      cout<<string[x];
      delay(100);
      c++;
     }
      c=20;
   char string1[100]="Programed By :";
   length=strlen(string1);
  for(x=0;x<length;x++)
    {
     gotoxy(c,10);
     cout<<string1[x];
     delay(100);
     c++;
     }
    c=25;
    char string2[100]="Muhammad Zafar Saleem ";
    length=strlen(string2);
  for( x=0;x<length;x++)
     {
      gotoxy(c,12);
      cout<<string2[x];
      delay(100);
      c++;
     }
    c=25;
    char string3[100]="Muhammad Ahsan Shahzad ";
    length=strlen(string3);
  for( x=0;x<length;x++)
    {
      gotoxy(c,14);
      cout<<string3[x];
      delay(100);
      c++;
    }
   c=21;
   char string4[100]="Supervioser :";
   length=strlen(string4);
  for( x=0;x<length;x++)
    {
      gotoxy(c,16);
      cout<<string4[x];
      delay(100);
      c++;
    }
   c=30;
   char string5[100]="Sir Rashid Ismaiel";
   length=strlen(string5);
  for( x=0;x<length;x++)
    {
      gotoxy(c,18);
      cout<<string5[x];
      delay(100);
      c++;
    }
   delay(1000);
   exit(0);
     }
 /////////////////////////Main Menue Options.void main_options(int count)
      {
      if(count==1)
      radiobutton(60,130,4,11,"Student Section",0);
      else
      radiobutton(60,130,4,11,"Student Section",1);
      if(count==2)
      radiobutton(60,160,4,11,"Staff Section",0);
      else
      radiobutton(60,160,4,11,"Staff Section",1);
      if(count==3)
      radiobutton(60,190,4,11,"Library Section",0);
      else
      radiobutton(60,190,4,11,"Library Section",1);
      if(count==4)
      radiobutton(60,220,4,11,"Sports",0);
      else
      radiobutton(60,220,4,11,"Sports",1);
      if(count==5)
      radiobutton(60,250,4,11,"Quit",0);
      else
      radiobutton(60,250,4,11,"Quit",1);

      }

////////////////////////Student Section Optionsvoid student_option(int count)
      {
      if(count==1)
      radiobutton(60,130,4,11,"Admission Form",0);
      else
      radiobutton(60,130,4,11,"Admission Form",1);
      if(count==2)
      radiobutton(60,160,4,11,"Fee Record",0);
      else
      radiobutton(60,160,4,11,"Fee Record",1);
      if(count==3)
      radiobutton(60,190,4,11,"Submit Fee",0);
      else
       radiobutton(60,190,4,11,"Submit Fee",1);
      if(count==4)
      radiobutton(60,220,4,11,"Submit Acadamic Record",0);
      else
      radiobutton(60,220,4,11,"Submit Acadamic Record",1);
      if(count==5)
      radiobutton(60,250,4,11,"View Acadamic Record",0);
      else
      radiobutton(60,250,4,11,"View Acadamic Record",1);
      if(count==6)
      radiobutton(60,280,4,11,"Quit To Main Menue",0);
      else
      radiobutton(60,280,4,11,"Quit To Main Menue",1);
      }

////////////////////////Staff Section Menue.void Staff_option(int count)
      {
      if(count==1)
      radiobutton(60,130,4,11,"Appoint Staff Member",0);
      else
      radiobutton(60,130,4,11,"Appoint Staff Member",1);
      if(count==2)
      radiobutton(60,160,4,11,"Staff Personal Info",0);
      else
      radiobutton(60,160,4,11,"Staff Personal Info",1);
      if(count==3)
      radiobutton(60,190,4,11,"Salary Info",0);
      else
      radiobutton(60,190,4,11,"Salary Info",1);
      if(count==4)
      radiobutton(60,220,4,11,"Pay Salary",0);
      else
      radiobutton(60,220,4,11,"Pay Salary",1);
      if(count==5)
      radiobutton(60,250,4,11,"Quit To Main Menue",0);
      else
      radiobutton(60,250,4,11,"Quit To Main Menue",1);
      }

/////////////////////////Library Section Menue.void library_option(int count)
     {
      if(count==1)
      radiobutton(60,130,4,11,"Books Entry",0);
      else
      radiobutton(60,130,4,11,"Books Entry",1);
      if(count==2)
      radiobutton(60,160,4,11,"Search A Book",0);
      else
      radiobutton(60,160,4,11,"Search A Book",1);
      if(count==3)
      radiobutton(60,190,4,11,"Issue A Book",0);
      else
      radiobutton(60,190,4,11,"Issue A Book",1);
      if(count==4)
      radiobutton(60,220,4,11,"Return Book",0);
      else
      radiobutton(60,220,4,11,"Return Book",1);
      if(count==5)
      radiobutton(60,250,4,11,"Quit To Main Menue",0);
      else
      radiobutton(60,250,4,11,"Quit To Main Menue",1);
   }

   ///////////////////////Sports Section Menue.void sports_option(int count)
     {
      if(count==1)
      radiobutton(60,130,4,11,"Enter Events Record",0);
      else
      radiobutton(60,130,4,11,"Enter Events Record",1);
      if(count==2)
      radiobutton(60,160,4,11,"Upcoming Events",0);
      else
      radiobutton(60,160,4,11,"Upcoming Events",1);
      if(count==3)
      radiobutton(60,190,4,11,"Enter Winner's Record",0);
      else
      radiobutton(60,190,4,11,"Enter Winner's Record",1);
      if(count==4)
      radiobutton(60,220,4,11,"View Winner's Record",0);
      else
      radiobutton(60,220,4,11,"View Winner's Record",1);
      if(count==5)
      radiobutton(60,250,4,11,"Quit To Main Menue",0);
      else
      radiobutton(60,250,4,11,"Quit To Main Menue",1);
   }

   /////////////////////////To Make Single Brick.void brick(int x1,int y1,int x2,int y2,int col)
     {
    setcolor(col);
    setfillstyle(1,col);
    rectangle(x1,y1,x2,y2);
    floodfill(x1+2,y1+2,col);
    setcolor(15);
    rectangle(x1,y1,x2,y2);
     }

  ////////////////////////To Make a line of Bricksvoid brickline(int x1,int y1,int x2,int y2,int length)
     {
      for(int i=1;i<=length;i++)
      {
      brick(x1,y1,x2,y2,4);
       x1+=20;
       x2+=20;

       }
   }

   ///////////////////A single Step Of Progress Bar.void step(int x1,int y1,int x2,int y2,int col1,int col2)
      {
       setcolor(col1);
       setfillstyle(1,col1);
       rectangle(x1,y1,x2,y2);
       floodfill(x1+2,y1+2,col1);
       setcolor(col2);
       line(x2,y1,x2,y2);
       line(x2-1,y1,x2-1,y2);
       line(x2-2,y1,x2-2,y2);
       line(x2-3,y1,x2-3,y2);
      }

   ////////////////Complete Progress Barvoid prog_bar()
     {
       int x1=190,x2=202;
       int y1=428,y2=452;
       delay(2000);
   for(int x=1;x<=20;x++)
     {
      if(x%2==0)
      step(x1,y1,x2,y2,4,0);
      else
      step(x1,y1,x2,y2,15,0);
      delay(400);
      x1+=12;
      x2+=12;
     }
      }

  /////////////////InterFace Of Search Formint search_Form(char *title,char *txt)
   {
   int idd;
   cleardevice();
   border();
   setcolor(7);
   setfillstyle(1,7);
   rectangle(140,120,470,350);
   floodfill(142,122,7);
   setcolor(15);
   rectangle(138,118,472,352);
   setcolor(14);
   settextstyle(2,0,6);
   outtextxy(230,60,title);
   setcolor(1);
   settextstyle(2,0,6);
   outtextxy(230,185,txt);
   textfield(265,223,335,242,4);
   Jbutton(265,260,335,285,0,"SUBMIT");
   gotoxy(37,15);
   cin>>idd;
   Jbutton(265,260,335,285,1,"SUBMIT");
   delay(300);
   Jbutton(265,260,335,285,0,"SUBMIT");
   return idd;
   }

 ////////////Another Search Form.void search_Form1(char *title,char *txt)
    {
   cleardevice();
   border();
   setcolor(7);
   setfillstyle(1,7);
   rectangle(140,120,470,350);
   floodfill(142,122,7);
   setcolor(15);
   rectangle(138,118,472,352);
   setcolor(14);
   settextstyle(2,0,6);
   outtextxy(230,60,title);
   setcolor(1);
   settextstyle(2,0,6);
   outtextxy(210,185,txt);
   textfield(237,223,360,242,4);
   Jbutton(265,260,335,285,0,"SUBMIT");
   }

//////////////// Message After Submitting Data.void Submit_Message()
    {
     cleardevice();
     int x=0,x1=385;
     border();
     setcolor(14);
     settextstyle(2,0,6);
     outtextxy(240,60,"Saving Record");
     setcolor(10);
     settextstyle(7,0,2);
     outtextxy(110,200,"Please Waite While Saving");
     while(x<10)
     {
     delay(500);
     outtextxy(x1+=10,200,".");
     x++;
     }
     delay(1000);
     cleardevice();
     border();
     setcolor(14);
     settextstyle(2,0,6);
     outtextxy(245,60,"Record Saved");
     setcolor(7);
     rectangle(180,180,440,240);
     rectangle(182,182,438,238);
     setcolor(10);
     settextstyle(7,0,2);
     outtextxy(210,195,"Saved Successfully");
     setcolor(4);
     settextstyle(10,0,1);
     outtextxy(200,340,"Press Any Key ");
     setcolor(14);
     settextstyle(10,0,1);
     outtextxy(202,340,"Press Any Key ");
    }

 //////////////  Detail Of Funds Student has to pay At Addmission time,void Funds_Detail()
      {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(205,60,"Important Information");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(130,92, "Computer Has Assigned Id =");
      setcolor(15);
      settextstyle(2,0,6);
      outtextxy(70,115, "Now Pay Following Dues To Get Your Identity Card");
      outtextxy(100,135, "Which is Necessary To Sit In Class Room.");
      setcolor(1);
      setfillstyle(1,1);
      rectangle(150,170,450,190);
      floodfill(152,172,1);
      setcolor(15);
      rectangle(148,168,452,373);
      setcolor(15);
      settextstyle(2,0,6);
      outtextxy(180,170,"Fee Detail");
      outtextxy(350,170,"Amount");
      int x=170,y=200;
      setcolor(11);
      settextstyle(2,0,5);
      outtextxy(x-6,y,"Admission Fee");
      outtextxy(x+180,y,"100  Rs");
      outtextxy(x,y+=20,"Library Fund");
      outtextxy(x+180,y,"150  Rs");
      outtextxy(x,y+=20,"Medical Fund");
      outtextxy(x+180,y,"150  Rs");
      outtextxy(x,y+=20,"General Fund");
      outtextxy(x+180,y,"100  Rs");
      outtextxy(x,y+=20,"  Paper Fund");
      outtextxy(x+180,y,"150  Rs");
      outtextxy(x,y+=20,"  Tution Fee");
      outtextxy(x+180,y,"350  Rs");
      outtextxy(x,y+=20," Id Card Fee");
      outtextxy(x+180,y,"100  Rs");
      setcolor(1);
      setfillstyle(1,1);
      rectangle(150,350,450,370);
      floodfill(152,352,1);
      setcolor(15);
      settextstyle(2,0,6);
      outtextxy(180,350,"Total Fee");
      outtextxy(350,350,"1100  Rs");
      setcolor(7);
      settextstyle(2,0,6);
      outtextxy(130,395, "To Sumbit Fee View Submit Fee Option");

     }

  /////////////// Message Appears When Any Thing is Not Foundvoid Not_Found(int x)
     {
     setcolor(8);
     setfillstyle(9,8);
     rectangle(178,170,425,250);
     floodfill(180,172,8);
     setcolor(7);
     rectangle(176,168,427,252);
     if(x==0)
     {
     setcolor(14);
     settextstyle(7,0,3);
     outtextxy(198,195,"Data Not Found");
     }
     elseif(x==1)
     {
     setcolor(14);
     settextstyle(7,0,3);
     outtextxy(198,195," Id Not Found ");
     }
     elseif(x==2)
     {
     setcolor(14);
     settextstyle(7,0,3);
     outtextxy(198,195,"Book Not Found");
     }
     }
    };  //End graphic Class/***************************************************************************///////////////////////////// Class Of Student Section ////////////////////////***************************************************************************/class student :public graphic
     {
      public:
    char name[25],fname[25],address[50],gender[8],f_occupation[30];
    char birth[15],age[3],cls[15],f_income[10],date[15];
    char ph[10];
    int year,month,day;
    int urdu,eng,math,pak,sc,Islm,total;
    int fee,fee_payable,books_issued,id;

 /////////////////////////////////////////////////////////////////////////////////////////Addmission Form.void Form()
   {
   cleardevice();
   border();
   setcolor(14);
   settextstyle(2,0,6);
   outtextxy(240,60,"Admission Form");
   int col=11;
   int y=143;
   setcolor(col);
   settextstyle(2,0,6);
   outtextxy(60,y,"Name : ");
   textfield(120,y,250,y+20,14);
   setcolor(col);
   outtextxy(300,y,"Father's Name : ");
   textfield(450,y,580,y+20,4);
   setcolor(col);
   outtextxy(30,y+32,"Address : ");
   textfield(120,y+32,580,y+52,4);
   setcolor(col);
   outtextxy(50,y+64,"Class : ");
   textfield(120,y+64,250,y+84,4);
   setcolor(col);
   outtextxy(308,y+64,"Date Of Birth : ");
   textfield(450,y+64,580,y+84,4);
   setcolor(col);
   outtextxy(70,y+95,"Ph# : ");
   textfield(120,y+95,250,y+115,4);
   setcolor(col);
   outtextxy(400,y+95,"Age : ");
   textfield(450,y+95,580,y+115,4);
   setcolor(col);
   outtextxy(20,y+126,"F-Income : ");
   textfield(120,y+126,250,y+146,4);
   setcolor(col);
   outtextxy(310,y+126,"F-Occupation : ");
   textfield(450,y+126,580,y+146,4);
   setcolor(col);
   outtextxy(430,y+188,"Date : ");
     struct date d;
      getdate(&d);
      year=d.da_year;
      day=d.da_day;
      month=d.da_mon;
      gotoxy(62,22);
      cout<<day<<"/"<<month<<"/"<<year;
      button(250,380,350,410,0," Submit");
      id=1;
      student view;
      fstream file1;
      file1.open("Admission.dat",ios::app|ios::out|ios::in|ios::binary);
      file1.seekg(0);
      file1.read((char *)&view,sizeof(view));
      while(!file1.eof())
    {
    id++;
    file1.read((char *)&view,sizeof(view));
    }
      file1.close();
      student record;
      fstream file;
      file.open("Admission.dat",ios::app|ios::out|ios::in|ios::binary);
      record.Input_Form(143);
      file.write((char *)&record,sizeof(record));
      file.close();
      button(250,380,350,410,1," Submit");
      delay(300);
      button(250,380,350,410,0," Submit");
      Submit_Message();
      getch();
      Funds_Detail();
      gotoxy(50,7);
      cout<<id;
      getch();
      Student_Menue();
      }

  ////////////////To Take Input In Input Form.void Input_Form(int y)
      {
      int counter=1;
      student view;
      fstream file1;
      file1.open("Admission.dat",ios::app|ios::out|ios::in|ios::binary);
      file1.seekg(0);
      file1.read((char *)&view,sizeof(view));
     while(!file1.eof())
    {
    counter++;
    file1.read((char *)&view,sizeof(view));
    }
    file1.close();
    id=counter;
    gotoxy(17,10);
    gets(name);
    textfield(120,y,250,y+20,4);
    textfield(450,y,580,y+20,14);
    gotoxy(58,10);
    gets(fname);
    textfield(450,y,580,y+20,4);
    textfield(120,y+32,580,y+52,14);
    gotoxy(17,12);
    gets(address);
    textfield(120,y+32,580,y+52,4);
    textfield(120,y+64,250,y+84,14);
    gotoxy(17,14);
    gets(cls);
    textfield(120,y+64,250,y+84,4);
    textfield(450,y+64,580,y+84,14);
    gotoxy(58,14);
    gets(birth);
    textfield(450,y+64,580,y+84,4);
    textfield(120,y+95,250,y+115,14);
    gotoxy(17,16);
    gets(ph);
    textfield(120,y+95,250,y+115,4);
    textfield(450,y+95,580,y+115,14);
    gotoxy(58,16);
    gets(age);
    textfield(450,y+95,580,y+115,4);
    textfield(120,y+126,250,y+146,14);
    gotoxy(17,18);
    gets(f_income);
    textfield(120,y+126,250,y+146,4);
    textfield(450,y+126,580,y+146,14);
    gotoxy(58,18);
    gets(f_occupation);
    fee=1100;
    fee_payable=1100;
    books_issued=0;
     struct date d;
     getdate(&d);
     year=d.da_year;
     day=d.da_day;
     month=d.da_mon;
      }

 /////////////////To Control Radio Buttons In Student Menue.void Student_Menue()
      {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(240,60,"Student Section");
      setcolor(14);
      settextstyle(2,0,7);
      outtextxy(200,380,"Use Tab Key To Select");
      int count=1;
      char ch;
      do{
     student_option(count);
     ch=getche();
     if(ch==9)
     count+=1;
     if(count==7)
     count=1;
    }
    while(ch!=13);
    if(count==1)
    Form();
    if(count==2)
    View_Fee_Record();
    if(count==3)
    Enter_Fee_Record();
    if(count==4)
    Enter_Acadamic_Record();
    if(count==5)
    View_Acadamic_Record();
      elseif(count==5)
        return;
    }

 ////////////////To Input Students Acadamic Record.void Enter_Acadamic_Record()
   {
   int idd;
   idd=search_Form("Enter Record","Enter Student Id ");
   cleardevice();
   border();
   setcolor(14);
   settextstyle(2,0,6);
   outtextxy(215,60,"Enter Acadmic Record");
   int counter=0;
   student record1;
   fstream file1;
   file1.open("Admission.dat",ios::app|ios::out|ios::in|ios::binary);
   file1.seekg(0);
   file1.read((char *)&record1,sizeof(record1));
   while(!file1.eof())
   {
   if(idd==record1.id)
   {
   record1.S_Info();
   counter=1;
   break;
   }
   file1.read((char *)&record1,sizeof(record1));
   }
   file1.close();
    if(counter==0)
       record1.Not_Found(1);
      else
      {
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(143,90,"       Name :");
      outtextxy(145,107,"Father Name :");
      outtextxy(145,122,"      Class :");
      setcolor(1);
      setfillstyle(1,1);
      rectangle(150,155,450,175);
      floodfill(152,167,1);
      setcolor(15);
      settextstyle(2,0,6);
      outtextxy(170,155,"Subject");
      outtextxy(270,155,"Total");
      outtextxy(360,155,"Obtained");

   int col=11;
   int col1=15;
   int y=190;
   setcolor(col);
   settextstyle(2,0,6);
   outtextxy(180,y,"Urdu :");
   setcolor(col1);
   outtextxy(280,y,"100");
   textfield(360,y,420,y+20,14);
   setcolor(col);
   outtextxy(155,y+32,"English :");
   setcolor(col1);
   outtextxy(280,y+32,"100");
   textfield(360,y+32,420,y+52,4);
   setcolor(col);
   outtextxy(148,y+64,"Islamyat :");
   setcolor(col1);
   outtextxy(280,y+64,"100");
   textfield(360,y+64,420,y+84,4);
   setcolor(col);
   outtextxy(116,y+96,"Pak Studies :");
   setcolor(col1);
   outtextxy(280,y+96,"100");
   textfield(360,y+96,420,y+116,4);
   setcolor(col);
   outtextxy(120,y+128,"Mathematics :");
   setcolor(col1);
   outtextxy(280,y+128,"100");
   textfield(360,y+128,420,y+148,4);
   setcolor(col);
   outtextxy(155,y+160,"Science :");
   setcolor(col1);
   outtextxy(280,y+160,"100");
   textfield(360,y+160,420,y+180,4);
   button(240,405,340,435,0," Submit");
   student record;
   fstream file;
   file.open("student.dat",ios::app|ios::out|ios::in|ios::binary);
   record.input(190,idd);
   file.write((char *)&record,sizeof(record));
   file.close();
   button(240,405,340,435,1," Submit");
   delay(300);
   button(240,405,340,435,0," Submit");
   Submit_Message();
   }
   getch();
   Student_Menue();
   }

 ////////////////To View Student's General Information.void S_Info()
      {
      gotoxy(42,7);
      cout<<name;
      gotoxy(42,8);
      cout<<fname;
      gotoxy(42,9);
      cout<<cls;
      }

  ////////////////To Input Marks Of Student.void input(int y,int counter)
    {
      id=counter;
      gotoxy(48,13);
      cin>>urdu;
      textfield(360,y,420,y+20,4);
      textfield(360,y+32,420,y+52,14);
      gotoxy(48,15);
      cin>>eng;
      textfield(360,y+32,420,y+52,4);
      textfield(360,y+64,420,y+84,14);
      gotoxy(48,17);
      cin>>Islm;
      textfield(360,y+64,420,y+84,4);
      textfield(360,y+96,420,y+116,14);
      gotoxy(48,19);
      cin>>pak;
      textfield(360,y+96,420,y+116,4);
      textfield(360,y+128,420,y+148,14);
      gotoxy(48,21);
      cin>>math;
      textfield(360,y+128,420,y+148,4);
      textfield(360,y+160,420,y+180,14);
      gotoxy(48,23);
      cin>>sc;
      total=urdu+eng+Islm+pak+math+sc;
       }

  //////////////////To View Acadamic record.void View_Acadamic_Record()
      {
      int idd;
      idd=search_Form("View Record","Enter Student Id ");
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(215,60,"View Acadmic Record");
      int counter=0;
      student record1;
      fstream file1;
      file1.open("Admission.dat",ios::app|ios::out|ios::in|ios::binary);
      file1.seekg(0);
      file1.read((char *)&record1,sizeof(record1));
      while(!file1.eof())
      {
      if(idd==record1.id)
      {
      record1.S_Info();
      counter=1;
      break;
      }
      file1.read((char *)&record1,sizeof(record1));
      }
      file1.close();

      if(counter==0)
       Not_Found(1);
      else
      {
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(143,90,"       Name :");
      outtextxy(145,107,"Father Name :");
      outtextxy(145,122,"      Class :");

      int counter=0;
      student record;
      fstream file;
      file.open("student.dat",ios::app|ios::out|ios::in|ios::binary);
      file.seekg(0);
      file.read((char *)&record,sizeof(record));
      while(!file.eof())
      {
      if(idd==record.id)
      {
       record.output();
       counter=1;
      }
      file.read((char *)&record,sizeof(record));
      }
      file.close();
   if(counter==0)
     Not_Found(0);
   else
    {
      setcolor(15);
      rectangle(130,155,472,406);
      setcolor(1);
      setfillstyle(1,1);
      rectangle(132,157,470,180);
      floodfill(134,159,1);
      setcolor(1);
      setfillstyle(1,1);
      rectangle(132,379,360,404);
      floodfill(134,381,1);
      setcolor(15);
      line(265,183,265,406);
      line(360,183,360,406);
      line(130,377,472,377);
      setcolor(15);
      settextstyle(2,0,6);
      outtextxy(180,159,"Subject");
      outtextxy(290,159,"Total");
      outtextxy(380,159,"Obtained");
   int col=11;
   int col1=15;
   int y=190;
   setcolor(col);
   settextstyle(2,0,6);
   outtextxy(200,y,"Urdu ");
   setcolor(col1);
   outtextxy(300,y,"100");
   setcolor(col);
   outtextxy(175,y+32,"English ");
   setcolor(col1);
   outtextxy(300,y+32,"100");
   setcolor(col);
   outtextxy(168,y+64,"Islamyat ");
   setcolor(col1);
   outtextxy(300,y+64,"100");
   setcolor(col);
   outtextxy(136,y+96,"Pak Studies ");
   setcolor(col1);
   outtextxy(300,y+96,"100");
   setcolor(col);
   outtextxy(140,y+128,"Mathematics ");
   setcolor(col1);
   outtextxy(300,y+128,"100");
   setcolor(col);
   outtextxy(175,y+160,"Science ");
   setcolor(col1);
   outtextxy(300,y+160,"100");
   setcolor(col);
   outtextxy(175,y+192,"Total ");
   setcolor(col1);
   outtextxy(300,y+192,"600");
    }
      }
      getch();
      Student_Menue();
   }

  ///////////////To See Marks Sheet Of Student.void output()
     {
      gotoxy(51,13);
      cout<<urdu;
      gotoxy(51,15);
      cout<<eng;
      gotoxy(51,17);
      cout<<Islm;
      gotoxy(51,19);
      cout<<pak;
      gotoxy(51,21);
      cout<<math;
      gotoxy(51,23);
      cout<<sc;
      gotoxy(51,25);
      cout<<total;
     }

 /////////////////To View Student Fee Record.void View_Fee_Record()
      {
      int idd;
      int counter=0;
      idd=search_Form("View Fee Record","Enter Student Id ");
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(230,60,"View Fee Record");
      student record;
      fstream file;
      file.open("Admission.dat",ios::app|ios::out|ios::in|ios::binary);
      file.seekg(0);
      file.read((char *)&record,sizeof(record));
      while(!file.eof())
      {
      if(idd==record.id)
      {
      setcolor(1);
      setfillstyle(1,1);
      rectangle(130,130,480,160);
      floodfill(132,132,1);
      setcolor(15);
      rectangle(128,128,482,330);
      setcolor(15);
      outtextxy(210,140,"Student Fee Record");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(183,170,"       Name :");
      outtextxy(185,203,"Father Name :");
      outtextxy(185,233,"      Class :");
      outtextxy(187,265,"  Total Fee :");
      outtextxy(185,298,"Fee payable :");
      record.Student_Info();
      record.Fee_Info();
      counter=1;
      }
      file.read((char *)&record,sizeof(record));
      }
      file.close();
      if(counter==0)
     Not_Found(1);
    getch();
      Student_Menue();
     }

///////////////////To See General Information About Student.void Student_Info()
      {
      gotoxy(41,12);
      cout<<name;
      gotoxy(41,14);
      cout<<fname;
      gotoxy(41,16);
      cout<<cls;
      }

 /////////////////To See Total Fee Of Student And Fee payable.void Fee_Info()
      {
      gotoxy(41,18);
      cout<<fee<<" Rs";
      gotoxy(41,20);
      cout<<fee_payable<<" Rs";
      }

 ////////////////////To Submit Student Fee.void Enter_Fee_Record()
      {
      int idd;
      idd=search_Form("Enter Fee Record","Enter Student Id ");
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(230,60,"Enter Fee Record");
  int check=0;
  int counter=0;
   student record1;
   fstream file1;
   file1.open("Admission.dat",ios::app|ios::out|ios::in|ios::binary);
   file1.seekg(0);
   file1.read((char *)&record1,sizeof(record1));
   while(!file1.eof())
   {
   if(idd==record1.id)
   {
   record1.Student_Info();
   if(record1.fee_payable==0)
      check=1;
      counter=1;
   break;
   }
   file1.read((char *)&record1,sizeof(record1));
   }
   file1.close();
   if(counter==0)
     record1.Not_Found(1);
     else
     {
      setcolor(1);
      setfillstyle(1,1);
      rectangle(110,130,450,160);
      floodfill(112,132,1);
      setcolor(15);
      outtextxy(160,135,"Enter Student Fee Record");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(143,170,"       Name :");
      outtextxy(145,206,"Father Name :");
      outtextxy(145,236,"      Class :");
      if(check==1)
      {
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(210,270,"All Dues are Clear");
      }
      else
      {
      outtextxy(165,270,"Enter Fee :");
      textfield(310,270,360,290,14);
      setcolor(11);
      settextstyle(2,0,4);
      outtextxy(370,275,"(in rupees)");
      button(240,340,340,370,0," Submit");
   int done=0;
   int found;
   student alteritem;
   fstream inoutfile;
   inoutfile.open("Admission.dat",ios::ate |ios::in| ios::out | ios::binary);
    inoutfile.seekg(0,ios::beg);
    found=0;
    int rec=0;
    gotoxy(41,18);
    cin>>fee_payable;

 while(inoutfile){
 rec++;
 inoutfile.read((char *) &alteritem, sizeof(alteritem));
 if(idd==alteritem.id){
 found=1;
 int location = (rec-1) * (sizeof(alteritem));
 inoutfile.seekp(location);
 if(fee_payable==alteritem.fee_payable)
 {
 alteritem.Fee();
 done++;
 }
 inoutfile.write((char *) &alteritem, sizeof(alteritem));
 inoutfile.close();
 break;
  }
 }
      button(240,340,340,370,1," Submit");
      delay(300);
      button(240,340,340,370,0," Submit");
      if(done==0)
      {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(230,60,"Run Time Error");
      setcolor(15);
      settextstyle(8,0,3);
      outtextxy(200,170,"Error Occured !!!");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(135,210,"Fee Submitted is Not Equals To Due Fee");
      outtextxy(220,240,"Fee Not Accepted");

      }
      else
      Submit_Message();

      }
      }
      getch();
      Student_Menue();
      }

  //////////////////// To View Fee Payable.void Fee()
     {
    fee_payable=0;
     }
  /////////////////// Virtual Function For library class

   };    //End Student Class/***************************************************************************///////////////////////////// Class Of Staff Section ////////////////////////***************************************************************************/class staff : public graphic
    {
      public:
    char name[25],fname[25],address[50],gender[8],f_occupation[30],
    qulification[15],post[15],ph[10];
    char birth[10],cls[10],exprience[8],date[15];
    int age;
    int salary,id,y,day,month,year,salary_payable;
    void Staff_Menue()
      {
      cleardevice();
      border();
      outtextxy(240,60,"Staff Section");
      setcolor(14);
      settextstyle(2,0,7);
      outtextxy(200,380,"Use Tab Key To Select");
      int count=1;
      char ch;
      do{
     Staff_option(count);
     ch=getche();
     if(ch==9)
     count+=1;
     if(count==6)
     count=1;
      }
    while(ch!='\r');
    if(count==1)
    Empoly_Form();
    if(count==2)
    Personal_Info();
    if(count==3)
    View_Salary_Record();
    if(count==4)
    Enter_Salary_Record();
    if(count==5)
    {
    cleardevice();
    return ;
    }
    }

  void Empoly_Form()
   {
   cleardevice();
   border();
   setcolor(14);
   settextstyle(2,0,6);
   outtextxy(235,60,"Appointment Form");
   int col=11;
   y=143;
   setcolor(col);
   settextstyle(2,0,6);
   outtextxy(60,y,"Name : ");
   textfield(120,y,250,y+20,14);
   setcolor(col);
   outtextxy(306,y,"Father's Name : ");
   textfield(450,y,580,y+20,4);
   setcolor(col);
   outtextxy(30,y+32,"Address : ");
   textfield(120,y+32,580,y+52,4);
   setcolor(col);
   outtextxy(70,y+64,"Age : ");
   textfield(120,y+64,250,y+84,4);
   setcolor(col);
   outtextxy(308,y+64,"Date Of Birth :  ");
   textfield(450,y+64,580,y+84,4);
   setcolor(col);
   outtextxy(20,y+95,"Exprience:");
   textfield(120,y+95,250,y+115,4);
   setcolor(col);
   outtextxy(323,y+95,"Qulification : ");
   textfield(450,y+95,580,y+115,4);
   setcolor(col);
   outtextxy(40,y+126,"Gender : ");
   textfield(120,y+126,250,y+146,4);
   setcolor(col);
   outtextxy(393,y+126,"Post : ");
   textfield(450,y+126,580,y+146,4);
   button(250,380,350,410,0," Submit");
    setcolor(col);
    settextstyle(2,0,6);
   outtextxy(430,y+188,"Date : ");
     struct date d;
      getdate(&d);
     year=d.da_year;
     day=d.da_day;
     month=d.da_mon;
      gotoxy(62,22);
      cout<<day<<"/"<<month<<"/"<<year;
       id=1;
      staff view;
      fstream file1;
      file1.open("staff.dat",ios::app|ios::out|ios::in|ios::binary);
      file1.seekg(0);
      file1.read((char *)&view,sizeof(view));
     while(!file1.eof())
    {
    ++id;
    file1.read((char *)&view,sizeof(view));
    }
     file1.close();
   staff record;
   fstream file;
   file.open("staff.dat",ios::app|ios::out|ios::in|ios::binary);
    record.Input_Employ_Form(143);
    file.write((char *)&record,sizeof(record));
    button(250,380,350,410,1," Submit");
    delay(300);
    button(250,380,350,410,0," Submit");
    file.close();
    Submit_Message();
    getch();
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(220,60,"Id Information");
    setcolor(11);
    settextstyle(8,0,2);
    outtextxy(80,165,"Computer Has Assigned Id = ");
    gotoxy(55,12);
    cout<<id;
    getch();
    Staff_Menue();
     }


  void Input_Employ_Form(int y)
    {
    gotoxy(17,10);
    gets(name);
    textfield(120,y,250,y+20,4);
    textfield(450,y,580,y+20,14);
    gotoxy(58,10);
    gets(fname);
    textfield(450,y,580,y+20,4);
    textfield(120,y+32,580,y+52,14);
    gotoxy(17,12);
    gets(address);
    textfield(120,y+32,580,y+52,4);
    textfield(120,y+64,250,y+84,14);
    gotoxy(17,14);
    cin>>age;
    textfield(120,y+64,250,y+84,4);
    textfield(450,y+64,580,y+84,14);
    gotoxy(58,14);
    gets(birth);
    textfield(450,y+64,580,y+84,4);
    textfield(120,y+95,250,y+115,14);
    gotoxy(17,16);
    gets(exprience);
    textfield(120,y+95,250,y+115,4);
    textfield(450,y+95,580,y+115,14);
    gotoxy(58,16);
    gets(qulification);
    textfield(450,y+95,580,y+115,4);
    textfield(120,y+126,250,y+146,14);
    gotoxy(17,18);
    gets(gender);
    textfield(120,y+126,250,y+146,4);
    textfield(450,y+126,580,y+146,14);
    gotoxy(58,18);
    gets(post);
    struct date d;
    getdate(&d);
    year=d.da_year;
    day=d.da_day;
    month=d.da_mon;
if(strcmp(post,"pn")==0||strcmp(post,"Pn")==0||strcmp(post,"PN")==0)
   salary=3000;
elseif(strcmp(post,"Clerk")==0||strcmp(post,"clerk")==0||strcmp(post,"CLERK")==0)
   salary=5000;
elseif(strcmp(post,"Teacher")==0||strcmp(post,"teacher")==0||strcmp(post,"TEACHER")==0)
   salary=8000;
elseif(strcmp(post,"Principal")==0||strcmp(post,"principal")==0||strcmp(post,"PRINCIPAL")==0)
   salary=10000;
elseif(strcmp(post,"Headmaster")==0||strcmp(post,"headmaster")==0||strcmp(post,"HEADMASTER")==0)
   salary=10000;
elseif(strcmp(post,"Headmistress")==0||strcmp(post,"headmistress")==0||strcmp(post,"HEADMISTRESS")==0)
   salary=10000;
else
   salary=5000;

    salary_payable=0;

       int counter=1;
    staff view;
      fstream file1;
      file1.open("staff.dat",ios::app|ios::out|ios::in|ios::binary);
      file1.seekg(0);
      file1.read((char *)&view,sizeof(view));
     while(!file1.eof())
    {
    ++counter;
    file1.read((char *)&view,sizeof(view));
    }
    id = counter;
    }
     void View_Salary_Record()
      {
      int idd;
      int counter=0;
      idd=search_Form("View Salary Record","Enter Employer Id ");
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(215,60,"View Salary Record");
      staff record;
      fstream file;
      file.open("staff.dat",ios::app|ios::out|ios::in|ios::binary);
      file.seekg(0);
      file.read((char *)&record,sizeof(record));
      while(!file.eof())
      {
      if(idd==record.id)
      {
      record.pay(1);
      counter=1;
      }
      file.read((char *)&record,sizeof(record));
      file.close();
      }
      if(counter==0)
     Not_Found(0);
      else
      {
      setcolor(1);
      setfillstyle(1,1);
      rectangle(130,130,470,160);
      floodfill(132,132,1);
      setcolor(15);
      rectangle(128,128,472,330);
      setcolor(15);
      outtextxy(200,135,"Employer Salary Record");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(163,170,"       Name :");
      outtextxy(165,203,"Father Name :");
      outtextxy(165,233,"       Post :");
      outtextxy(138,265,"Monthly Salary :");
      outtextxy(145,300,"Salary Curently Payable = ");
      }
      getch();
       Staff_Menue();
      }
      void pay(int x)
    {
     gotoxy(42,12);
     cout<<name;
     gotoxy(42,14);
     cout<<fname;
     gotoxy(42,16);
     cout<<post;
     if(x==1)
     {
     gotoxy(42,18);
     cout<<salary<<" Rs";
     gotoxy(50,20);
     cout<<salary_payable<<" Rs";
     }
    }

  void Enter_Salary_Record()
      {
      struct date d;
      getdate(&d);
      if(d.da_day>10)
      {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(210,60,"Enter Salary Record");
      setcolor(15);
      settextstyle(8,0,3);
      outtextxy(200,165,"Error Occured !!!");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(150,205,"Salary Is Paied Upto 10th of month");
      outtextxy(200,235,"Current Date:");
      struct date d;
      getdate(&d);
      year=d.da_year;
      day=d.da_day;
      month=d.da_mon;
      gotoxy(42,16);
      cout<<day<<"/"<<month<<"/"<<year;
      }
      else
      {
      int idd;
      int counter=0;
      idd=search_Form("Enter Salary Record","Enter Employer Id ");
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(210,60,"Enter Salary Record");
      int check=0;
      staff record;
      fstream file;
      file.open("staff.dat",ios::app|ios::out|ios::in|ios::binary);
      file.seekg(0);
      file.read((char *)&record,sizeof(record));
      while(!file.eof())
      {
      if(idd==record.id)
      {
      if(record.salary_payable<record.salary/3)
     check++;
      record.pay(0);
      counter=1;
      }
      file.read((char *)&record,sizeof(record));
      }
      if(counter==0)
     Not_Found(1);
    else
     {
      setcolor(1);
      setfillstyle(1,1);
      rectangle(130,130,450,160);
      floodfill(132,132,1);
      setcolor(15);
      outtextxy(200,135,"Enter Salary Record");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(153,170,"       Name :");
      outtextxy(155,206,"Father Name :");
      outtextxy(155,236,"       Post :");
      if(check==1)
      {
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(150,270,"Salary Will Be Paied Next Month");
      goto End;
      }
      else
      {
      outtextxy(155,265,"     Salary :");
      textfield(330,270,380,290,14);
      setcolor(11);
      settextstyle(2,0,4);
      outtextxy(384,275,"(in rupees)");
      button(240,340,340,370,0," Submit");
      }
   int found=0;
   int done=0;
   staff alteritem;
   fstream inoutfile;
   inoutfile.open("staff.dat",ios::ate |ios::in| ios::out | ios::binary);
    inoutfile.seekg(0,ios::beg);
    int rec=0;
    gotoxy(43,18);
    cin>>salary_payable;
 while(inoutfile){
 rec++;
 inoutfile.read((char *) &alteritem, sizeof(alteritem));
 if(idd==alteritem.id)
 {
 found=1;
 int location = (rec-1) * (sizeof(alteritem));
 inoutfile.seekp(location);
 if(salary_payable==alteritem.salary_payable)
 {
 alteritem.pay();
 done++;
 }
 inoutfile.write((char *) &alteritem, sizeof(alteritem));
 inoutfile.close();
 break;
  }
  }
      button(240,340,340,370,1," Submit");
      delay(300);
      button(240,340,340,370,0," Submit");
     if(done==0)
      {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(230,60,"Run Time Error");
      setcolor(15);
      settextstyle(8,0,3);
      outtextxy(200,170,"Error Occured !!!");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(135,210,"Fee Submitted is Not Equals To Due Fee");
      outtextxy(220,240,"Fee Not Accepted");
      }
      else
      Submit_Message();
      }
      }
   End:
      getch();
      Staff_Menue();
       }
    void pay()
       {
    salary_payable=0;
       }

  void Personal_Info()
      {
      int idd;
      int counter=0;
      idd=search_Form("Enter Salary Record","Enter Employer Id ");
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(215,60,"Personal Information");
      staff record;
      fstream file;
      file.open("staff.dat",ios::app|ios::out|ios::in|ios::binary);
      file.seekg(0);
      file.read((char *)&record,sizeof(record));
      while(!file.eof())
      {
      if(idd==record.id)
      {
      record.Get_Personal_Info();
      counter=1;
      }
      file.read((char *)&record,sizeof(record));
      }
      if(counter==0)
     Not_Found(0);
      else
      {
      setcolor(1);
      setfillstyle(1,1);
      rectangle(120,130,470,160);
      floodfill(122,132,1);
      setcolor(15);
      rectangle(118,128,472,395);
      line(295,162,295,395);
      setcolor(15);
      outtextxy(210,135,"Personal Information");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(163,170,"       Name ");
      outtextxy(165,206,"Father Name ");
      outtextxy(165,236,"Qulification ");
      outtextxy(130,268,"Apointment Date");
      outtextxy(165,298,"       Post ");
      outtextxy(193,330,"     Age ");
      outtextxy(165,362,"     Gender ");
       }
      getch();
      Staff_Menue();
      }

 void Get_Personal_Info()
       {
      gotoxy(42,12);
      cout<<name;
      gotoxy(42,14);
      cout<<fname;
      gotoxy(42,16);
      cout<<qulification;
      gotoxy(42,18);
      cout<<day<<"-"<<month<<"-"<<year;
      gotoxy(42,20);
      cout<<post;
      gotoxy(42,22);
      cout<<age;
      gotoxy(42,24);
      cout<<gender;

    }

    };
/***************************************************************************///////////////////////////// Class Of Library Section ////////////////////////***************************************************************************/class library : public student
    {
      public:
       char book_name[25],author[25],catagry[30];
       int shelf,bookno,status;

    void library_Menue()
      {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(230,60,"Library Section");
      setcolor(14);
      settextstyle(2,0,7);
      outtextxy(200,380,"Use Tab Key To Select");
      int count=1;
      char ch;
      do{
     library_option(count);
     ch=getche();
     if(ch==9)
     count+=1;
     if(count==6)
     count=1;
    }
    while(ch!='\r');
    if(count==1)
    Book_Entry();
    if(count==2)
    Search_Book();
    if(count==3)
    Issue_Books();
    if(count==4)
    Return_Books();
    if(count==5)
    {
    cleardevice();
    return;
    }
    }


  void Book_Entry()
      {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(220,60,"Enter Book Record");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(80,143,"Name Of Book :");
      textfield(225,143,365,163,14);
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(75,173,"Author's Name :");
      textfield(225,175,365,195,4);
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(113,203,"Publisher :");
      textfield(225,207,365,227,4);
      setcolor(11);
      outtextxy(126,236," Book # :");
      textfield(225,237,365,257,4);
      setcolor(11);
      outtextxy(120,268," Shelf # :");
      textfield(225,268,365,288,4);

      button(250,330,350,360,0," Submit");

   library record;
   fstream file;
   file.open("book.dat",ios::app|ios::out|ios::in|ios::binary);
   record.Input();
   file.write((char *)&record,sizeof(record));
   file.close();

      button(250,330,350,360,1," Submit");
      delay(300);
      button(250,330,350,360,0," Submit");
      Submit_Message();
      getch();
      library_Menue();
    }
     void Input()
      {
      gotoxy(30,10);
      gets(book_name);
      textfield(225,143,365,163,4);
      textfield(225,175,365,195,14);
      gotoxy(30,12);
      gets(author);
      textfield(225,175,365,195,4);
      textfield(225,207,365,227,14);
      gotoxy(30,14);
      gets(catagry);
      textfield(225,207,365,227,4);
      textfield(225,237,365,257,14);
      gotoxy(30,16);
      cin>>bookno;
      textfield(225,237,365,257,4);
      textfield(225,268,365,288,14);
      gotoxy(30,18);
      cin>>shelf;
      status=0;
      }

     void Search_Book()
      {
      char book[25];
      gotoxy(32,15);
      search_Form1("View Book's Record","  Enter Book Name");
      cin>>book;
      Jbutton(265,260,335,285,1,"SUBMIT");
      delay(300);
      Jbutton(265,260,335,285,0,"SUBMIT");
      int counter=0;
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(210,60,"View Book's Record");
      library record;
      fstream file;
      file.open("book.dat",ios::app|ios::out|ios::in|ios::binary);
      file.seekg(0);
      file.read((char *)&record,sizeof(record));
      while(!file.eof())
      {
     if(strcmp(book,record.book_name)==0)
      {
      record.output();
      counter=1;
      }
      file.read((char *)&record,sizeof(record));
      }
   if(counter==0)
       Not_Found(2);
      else
       {
      setcolor(1);
      setfillstyle(1,1);
      rectangle(130,130,470,160);
      floodfill(132,132,1);
      setcolor(15);
      rectangle(128,128,472,322);
      line(295,162,295,300);
      setcolor(1);
      setfillstyle(1,1);
      rectangle(130,302,470,320);
      floodfill(132,304,1);
      setcolor(15);
      outtextxy(210,135,"Book's Information");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(163,170,"       Name ");
      outtextxy(165,203,"Author Name ");
      outtextxy(167,236,"  Publisher ");
      outtextxy(205,268,"Shelf #");
      }
      getch();
      library_Menue();

      }

     void output()
      {
      gotoxy(40,12);
      cout<<book_name;
      gotoxy(40,14);
      cout<<author;
      gotoxy(40,16);
      cout<<catagry;
      gotoxy(40,18);
      cout<<shelf;
      if(status==1)
      {
       setcolor(11);
       settextstyle(2,0,6);
       outtextxy(190,350,"Book is Already Issued");
      }
      else
       {
       setcolor(11);
       settextstyle(2,0,6);
       outtextxy(220,350,"Book is Available");
       }
      }

  void Issue_Books()
      {
      int idd;
      idd=search_Form("Issue A Book","Enter Student Id ");
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(230,60,"Issue A Book");
      student s;
      library record;
      int counter=0;
      fstream file;
      file.open("Admission.dat",ios::app|ios::out|ios::in|ios::binary);
      file.seekg(0);

    file.read((char *)&s,sizeof(s));
    while(!file.eof())
     {
     if(idd==s.id)
      {
      s.Student_Info();
      counter=1;
      break;
      }
      file.read((char *)&s,sizeof(s));
      }
      file.close();

   if(counter==0)
      Not_Found(1);
      else
      {
      setcolor(1);
      setfillstyle(1,1);
      rectangle(120,130,460,160);
      floodfill(122,132,1);
      setcolor(15);
      outtextxy(230,135,"Issue A Book");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(163,170,"       Name ");
      outtextxy(165,200,"Father Name ");
      outtextxy(165,235,"      Class ");
      outtextxy(157,270,"Name Of Book");
      textfield(300,270,400,290,14);
      button(240,330,340,360,0," Submit");
      gotoxy(40,18);
      cin>>book_name;

   int found=0;
   library alteritem;
   fstream inoutfile;
   inoutfile.open("Book.dat",ios::ate |ios::in| ios::out | ios::binary);
    inoutfile.seekg(0,ios::beg);
    int rec=0;
 while(inoutfile){
 rec++;
 inoutfile.read((char *) &alteritem, sizeof(alteritem));
 if(strcmp(book_name,alteritem.book_name)==0&&alteritem.status==0){
 found=1;
 int location = (rec-1) * (sizeof(alteritem));
 inoutfile.seekp(location);
 alteritem.B_Issue(1);
 inoutfile.write((char *) &alteritem,sizeof(alteritem));
 inoutfile.close();
 break;
  }
 }

      button(240,330,340,360,1," Submit");
      delay(300);
      button(240,330,340,360,0," Submit");

  if(found==1)
      Submit_Message();
   else
     {
     cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(230,60,"Issue A Book");
     Not_Found(2);
     }
      }
      getch();
      library_Menue();
      }

  void B_Issue(int x)
    {
     if(x==1)
     status=1;
     else
      status=0;
    }


  void Return_Books()
      {

      int idd;
      idd=search_Form("Return A Book","Enter Student Id ");
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(230,60,"Return A Book");
      student s;
      library record;
      int counter=0;
      fstream file;
      file.open("Admission.dat",ios::app|ios::out|ios::in|ios::binary);
      file.seekg(0);
      file.read((char *)&s,sizeof(s));
      while(!file.eof())
      {
     if(idd==s.id)
      {
      s.Student_Info();
      counter++;
      break;
      }
      file.read((char *)&s,sizeof(s));
      }
     file.close();
   if(counter==0)
      Not_Found(1);
      else
      {
      setcolor(1);
      setfillstyle(1,1);
      rectangle(120,130,460,160);
      floodfill(122,132,1);
      setcolor(15);
      outtextxy(230,135,"Return A Book");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(163,170,"       Name ");
      outtextxy(165,200,"Father Name ");
      outtextxy(165,235,"      Class ");
      outtextxy(157,270,"Name Of Book");
      textfield(300,270,400,290,14);
      button(240,330,340,360,0," Submit");
      gotoxy(40,18);
      cin>>book_name;

   int found=0;
   library alteritem;
   fstream inoutfile;
   inoutfile.open("Book.dat",ios::ate |ios::in| ios::out | ios::binary);
    inoutfile.seekg(0,ios::beg);
    int rec=0;
 while(inoutfile){
 rec++;
 inoutfile.read((char *) &alteritem, sizeof(alteritem));
 if(strcmp(alteritem.book_name,book_name)==0&&alteritem.status==1){
 found=1;
 int location = (rec-1) * (sizeof(s));
 inoutfile.seekp(location);
 alteritem.B_Issue(0);
 inoutfile.write((char *) &alteritem,sizeof(alteritem));
 inoutfile.close();
 break;
  }
 }

      button(240,330,340,360,1," Submit");
      delay(300);
      button(240,330,340,360,0," Submit");

  if(found==1)
      Submit_Message();
   else
     {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(230,60,"Return A Book");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(130,220,"This Book is not of This library");

     }
   }
      getch();
      library_Menue();
    }
    };
/***************************************************************************///////////////////////////// Class Of Sports Section ////////////////////////***************************************************************************/class sports :graphic
    {
     private:
       char name_of_event[25], date[20],place[80],ist[80],
         sec[80],winner[80];

        int r;
     public:
  void sports_Menue()
      {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(230,60,"Sports Section");
      setcolor(14);
      settextstyle(2,0,7);
      outtextxy(200,380,"Use Tab Key To Select");
      int count=1;
      char ch;

      do{
     sports_option(count);
     ch=getche();
     if(ch==9)
     count+=1;
     if(count==6)
     count=1;
    }
    while(ch!='\r');
    if(count==1)
          Enter_Event_record();
    if(count==2)
          View_Event_Record();
    if(count==3)
          Enter_Winers_Record();
     if(count==4)
          View_Winers_Name();
    if(count==5)
        return;
    }

  void Enter_Event_record()
      {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(250,60,"Enter Record");
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(75,143,"Name Of Event :");
      textfield(225,143,365,163,14);
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(75,173,"Date Of Event :");
      textfield(225,175,365,195,4);
      setcolor(11);
      settextstyle(2,0,6);
      outtextxy(75,203,"Place Of Held :");
      textfield(225,207,365,227,4);
      button(250,300,350,330,0," Submit");
      sports save;
      fstream file;
      file.open("sports.dat",ios::app|ios::out|ios::in|ios::binary);
      save.input();
      file.write((char *)&save,sizeof(save));
      button(250,300,350,330,1," Submit");
      delay(300);
      button(250,300,350,330,0," Submit");
      file.close();
      Submit_Message();
      getch();
      sports_Menue();
    }
  void View_Event_Record()
       {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(210,60,"View UpComing Events");
      r=11;
      int counter=0;
      sports view;
      fstream file;
      file.open("sports.dat",ios::app|ios::out|ios::in|ios::binary);
      file.seekg(0);
      file.read((char *)&view,sizeof(view));
     while(!file.eof())
    {
     view.output(r++);
     counter=1;
     file.read((char *)&view,sizeof(view));
     }
      if(counter==0)
     Not_Found(0);
     else
      {
      setcolor(4);
   //   setfillstyle(1,4);
      rectangle(80,110,500,380);
 //     floodfill(84,114,4);
      setcolor(15);
      rectangle(80,110,500,380);
      setcolor(7);
      line(220,156,220,380);
      line(360,156,360,380);
      setcolor(1);
      setfillstyle(1,1);
      rectangle(82,112,498,150);
      floodfill(84,114,1);
      setcolor(15);
      settextstyle(2,0,5);
      outtextxy(100,130,"Name Of Event");
      outtextxy(240,130,"Date Of Event");
      outtextxy(370,130,"Place Of Event");
     }
     getch();
     sports_Menue();
     }
    void output(int r)
    {
     gotoxy(14,r);
     cout<<name_of_event;
     gotoxy(32,r);
     cout<<date;
     gotoxy(48,r);
     cout<<place;
    }
    void input()
      {
      gotoxy(30,10);
      gets(name_of_event);
      textfield(225,143,365,163,4);
      textfield(225,175,365,195,14);
      gotoxy(30,12);
      gets(date);
      textfield(225,175,365,195,4);
      textfield(225,207,365,227,14);
      gotoxy(30,14);
      gets(place);

      }

    void Enter_Winers_Record()
       {
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(210,60,"Enter Winner's Record");
      setcolor(1);
      setfillstyle(1,1);
      rectangle(130,115,480,135);
      floodfill(132,117,1);
      setcolor(15);
      settextstyle(2,0,6);
      outtextxy(190,115,"Enter Winner's Record");

  int col=11;
  int col1=15;
   int y=158;
   setcolor(col);
   settextstyle(2,0,6);
   outtextxy(161,y,"Name Of Event ");
   textfield(300,y,440,y+20,14);
   setcolor(col);
   outtextxy(162,y+32,"Date OF Event ");
   textfield(300,y+32,440,y+52,4);
   setcolor(col);
   outtextxy(161,y+64,"Place OF Held ");
   textfield(300,y+64,560,y+84,4);
   setcolor(col);
   outtextxy(208,y+96,"1st Team ");
   textfield(300,y+96,560,y+116,4);
   setcolor(col);
   outtextxy(207,y+128,"2nd Team ");
   setcolor(col1);
   textfield(300,y+128,560,y+148,4);
   setcolor(col);
   outtextxy(180,y+160,"Winner Team ");
   setcolor(col1);
   textfield(300,y+160,560,y+180,4);
   button(260,405,360,435,0," Submit");
   sports record;
   fstream file;
   file.open("winner.dat",ios::app|ios::out|ios::in|ios::binary);
   record.Input_Winners();
   file.write((char *)&record,sizeof(record));
   file.close();
   button(260,405,360,435,1," Submit");
   delay(300);
   button(260,405,360,435,0," Submit");
   Submit_Message();
   getch();
   sports_Menue();
   }

  void Input_Winners()
     {
      int y=158;
      gotoxy(39,11);
      gets(name_of_event);
      textfield(300,y,440,y+20,4);
      textfield(300,y+32,440,y+52,14);
      gotoxy(39,13);
      gets(date);
      textfield(300,y+32,440,y+52,4);
      textfield(300,y+64,560,y+84,14);
      gotoxy(39,15);
      gets(place);
      textfield(300,y+64,560,y+84,4);
      textfield(300,y+96,560,y+116,14);
      gotoxy(39,17);
      gets(ist);
      textfield(300,y+96,560,y+116,4);
      textfield(300,y+128,560,y+148,14);
      gotoxy(39,19);
      gets(sec);
      textfield(300,y+128,560,y+148,4);
      textfield(300,y+160,560,y+180,14);
      gotoxy(39,21);
      gets(winner);

   }

   void View_Winers_Name()
     {
      char name[25];
      gotoxy(31,15);
      search_Form1("View Winner's Record","Enter Event Name/Date ");
      cin>>name;
      Jbutton(265,260,335,285,1,"SUBMIT");
      delay(300);
      Jbutton(265,260,335,285,0,"SUBMIT");
      int counter=0;
      cleardevice();
      border();
      setcolor(14);
      settextstyle(2,0,6);
      outtextxy(210,60,"View Winner's Record");
      sports record;
      fstream file;
      file.open("winner.dat",ios::app|ios::out|ios::in|ios::binary);
      file.seekg(0);
      file.read((char *)&record,sizeof(record));
      while(!file.eof())
      {
     if(strcmp(name,record.name_of_event)==0)
      {
      record.Output_Winners();
      counter=1;
      }
      elseif(strcmp(name,record.date)==0)
      {
      record.Output_Winners();
      counter=1;
      }
      file.read((char *)&record,sizeof(record));
      }
      if(counter==0)
     Not_Found(0);
    else
     {
      setcolor(1);
      setfillstyle(1,1);
      rectangle(100,115,545,135);
      floodfill(102,117,1);
      setcolor(1);
      setfillstyle(1,1);
      rectangle(100,370,545,385);
      floodfill(102,372,1);
      setcolor(15);
      rectangle(100,113,545,387);
      line(280,137,280,370);
      setcolor(15);
      settextstyle(2,0,6);
      outtextxy(200,115,"View Winner's Record");

   int col=11;
   int col1=15;
   int y=158;
   setcolor(col);
   settextstyle(2,0,6);
   outtextxy(131,y,"Name Of Event ");
   setcolor(col);
   outtextxy(132,y+32,"Date OF Event ");
   setcolor(col);
   outtextxy(131,y+64,"Place Of Held ");
   setcolor(col);
   outtextxy(177,y+96,"Ist Team ");
   setcolor(col);
   outtextxy(175,y+128,"2nd Team ");
   setcolor(col);
   outtextxy(147,y+160,"Winner Team ");
   setcolor(col);

      }
      getch();
      sports_Menue();
   }

  void Output_Winners()
     {
      int y=158;
      gotoxy(37,11);
      cout<<name_of_event;
      gotoxy(37,13);
      cout<<date;
      gotoxy(37,15);
      cout<<place;
      gotoxy(37,17);
      cout<<ist;
      gotoxy(37,19);
      cout<<sec;
      gotoxy(37,21);
      cout<<winner;
       }
  };
/****************************************************************************//////////////////////////////// Start OF Main  ///////////////////////////////*****************************************************************************/void main()
  {
   int d,m;
    d=DETECT;
    initgraph(&d,&m,"..\\bgi");
    cleardevice();
    student s;
    staff stf;
    library l;
    sports sp;
    graphic g;
   g.Intro();
   g.present();
  main_menue:
   cleardevice();
   g.border();
   setcolor(14);
   settextstyle(2,0,6);
   outtextxy(250,60,"Main Menue");
   setcolor(14);
   settextstyle(2,0,7);
   outtextxy(200,380,"Use Tab Key To Select");
   int count=1;
   char ch;
     do{
    g.main_options(count);
    ch=getche();
    if(ch==9)
    count+=1;
    if(count==6)
    count=1;
    }while(ch!='\r');
   if(count==1)
      {
       s.Student_Menue();
       goto main_menue;
      }
   elseif(count==2)
      {
       stf.Staff_Menue();
       goto main_menue;
       }
     elseif(count==3)
    {
    l.library_Menue();
    goto main_menue;
    }
       if(count==4)
    {
    sp.sports_Menue();
    goto main_menue;
    }
    elseif(count==5)
      {
       g.outro();
       exit(0);
     }

 getch();
 closegraph();
     }  //End main()
