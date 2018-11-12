#include<stdio.h>
#include<string.h>
void main()
{

  int student,id,batch,semester,i,cse,english,math,cselab,softwarelab,total,x=500;
  int KK=0;
  FILE *fp=fopen("test", "w");


  float point5,Average;
  char name[20];
  char batch_th[5];
  char sem_rd[5];
  char sec[5];
  char season[10];

  char mark[15];
  char mark1[15];
  char mark2[15];
  char mark3[15];
  char mark4[15];

  char point[15];
  char point1[15];
  char point2[15];
  char point3[15];
  char point4[15];


  printf("Enter how many students result you want to show : ");

  scanf("%d",&student);

for(i=0;i<student;i++)
  {
  printf("     \n \n \n\  Enter  the Season : ");

  scanf("%s",&season);
      printf("  \n\n\  Enter the Student ID Number : ");

  scanf("%d",&id);

  printf("  \n\n  Enter the Student Name  : ");

  scanf("%s",&name);

  printf("  \n\n  Enter the Student Batch Number : ");

  scanf("%d%s",&batch ,&batch_th);

  printf("  \n\n  Enter the Student Semester : ");

  scanf("%d%s",&semester);

  printf("  \n\n  Enter the Student Section : ");

  scanf("%s",&sec);


  printf("    \n\n\n\t\t***Enter Subject Wise Marks***\n\n");

  printf("  \n  ");

  printf("  \n  How Much Mark Get In CSE :      ")
  ;
  scanf("%d",&cse);

  printf("  \n  How Much  Mark Get In Math :    ");

  scanf("%d",&math);

  printf("  \n  How Much Mark Get In English :  ");

  scanf("%d",&english);

  printf("  \n  How Much Mark Get In CSE Lab :  ");

  scanf("%d",&cselab);

  printf("  \n  How Much Mark Get In Software Development Lab : ");

  scanf("%d",&softwarelab);

  total=(cse+english+math+cselab+softwarelab);
  //printf("%d",total);

  Average=(total*100) / x;

       if(cse>=80)

     strcpy(mark,"A+");

  else if(cse>=75)

	  strcpy(mark,"A");

	else if( cse>=70)

        strcpy(mark,"A-");

	      else if (cse>=65)

		     strcpy(mark,"B+");


	      else if (cse>=60)

		     strcpy(mark,"B ");

		     else if (cse>=55)

		     strcpy(mark,"B-");

		     else if (cse>=40)

		     strcpy(mark,"c+");

		     else

                strcpy(mark,"F");


       if(math>=80)

     strcpy(mark1,"A+");

  else if(math>=75)

	  strcpy(mark1,"A");

	else if( math>=70)

        strcpy(mark1,"A-");


	      else if (math>=65)

		     strcpy(mark1,"B+");


	      else if (math>=60)

		     strcpy(mark1,"B");

		     else if (math>=55)

		     strcpy(mark1,"B-");

		     else if (math>=40)

		     strcpy(mark1,"c+");

		     else

                strcpy(mark1,"F");



       if(english>=80)

     strcpy(mark2,"A+");

  else if(english>=75)

	  strcpy(mark2,"A");

	else if( english>=70)

        strcpy(mark2,"A-");

	      else if (english>=65)

		     strcpy(mark2,"B+");


	      else if (english>=60)

		     strcpy(mark2,"B");

		     else if (english>=55)

		     strcpy(mark2,"B-");
		      else if (english>=40)

		     strcpy(mark2,"c+");

		     else

                strcpy(mark2,"F");




           if(cselab>=80)

     strcpy(mark3,"A+");

  else if(cselab>=75)

    strcpy(mark3,"A-");

  else if( cselab>=70)

		 strcpy(mark3,"A-");

		    else if (cselab>=65)

		     strcpy(mark3,"B+");


		    else if (cselab>=60)

		     strcpy(mark3,"B");

		     else if (cselab>=55)

		     strcpy(mark3,"B-");

		     else if (cselab>=40)

		     strcpy(mark3," c+");

		     else

                strcpy(mark3,"F");

           if(softwarelab>=80)

     strcpy(mark4,"A+");

  else if( softwarelab>=75)

	  strcpy(mark4,"A");

	else if( softwarelab>=70)

		 strcpy(mark4,"A-");

	      else if (softwarelab>=65)

		     strcpy(mark4,"B+");

		    else if (softwarelab>=60)

		     strcpy(mark4,"B");

		     else if (softwarelab>=55)

		     strcpy(mark4,"B-");
		     else if (softwarelab>=40)

		     strcpy(mark4,"c+");

		     else

                strcpy(mark4,"F");


                if(cse>=80)

     strcpy(point,"4.00");

  else if(cse >=75)

	  strcpy(point,"3.75");

	else if( cse>=70)

		 strcpy(point,"3.50");

	      else if (cse>=65)

		     strcpy(point,"3.25");

		    else if (cse>=60)

		     strcpy(point,"3.00");

		      else if (cse>=55)

		     strcpy(point,"2.75");

		     else if (cse>=40)

		     strcpy(point,"2.00");

		     else

                strcpy(point,"0.00");

                  if(math>=80)

     strcpy(point1,"4.00");

  else if( math>=75)

	  strcpy(point1,"3.75");

	else if( math>=70)

		 strcpy(point1,"3.50");

	      else if (math>=65)

		     strcpy(point1,"3.25");

		    else if (math>=60)

		     strcpy(point1,"3.00");

		      else if (math>=55)

		     strcpy(point1,"2.75");
		      else if (math>=40)

		     strcpy(point1,"2.00");

		     else

                strcpy(point1,"0.00");


                 if(english>=80)

     strcpy(point2,"4.00");

  else if( english>=75)

	  strcpy(point2,"3.75");

	else if( english>=70)

		 strcpy(point2,"3.50");

	      else if (english>=65)

		     strcpy(point2,"3.25");

		    else if (english>=60)

		     strcpy(point2,"3.00");

		      else if (english>=55)

		     strcpy(point2,"2.75");

		     else if (english>=40)

		     strcpy(point2,"2.00");


		     else

                strcpy(point2,"0.00");



                 if(cselab>=80)

     strcpy(point3,"4.00");

  else if( cselab>=75)

	  strcpy(point3,"3.75");

	else if( cselab>=70)

		 strcpy(point3,"3.50");

	      else if (cselab>=65)

		     strcpy(point3,"3.25");

		    else if (cselab>=60)

                strcpy(point3,"3.00");

            else if (cselab>=55)

		     strcpy(point3,"2.75");


            else if (cselab>=40)

		     strcpy(point3,"2.00");

		     else

                strcpy(point3,"0.00");

                 if(softwarelab>=80)

     strcpy(point4,"4.00");

  else if( softwarelab>=75)

	  strcpy(point4,"3.75");

	else if( softwarelab>=70)

		 strcpy(point4,"3.50");

	      else if (softwarelab>=65)

		     strcpy(point4,"3.25");

		    else if (softwarelab>=60)

		    strcpy(point4,"3.00");

		     else if (softwarelab>=55)

                strcpy(point4,"2.75");

                else if (softwarelab>=40)

                strcpy(point4,"2.00");

		     else

                strcpy(point4,"0.00");


getch();

}
}


