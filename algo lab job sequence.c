///Step 1: Sort p[i] into non-increasing order. After sorting p[1]>= p[2]>=p[3]>=... p[i.]
///Step 2: Add the next job i to the solution set if i can be completed by its deadline.
///Assign i to time slot [r-1, r], where r is the largest integer such that 1 <= r <= d[i]
///and [r-1, r] is free.
///Step 3: Stop if all jobs are examined. Otherwise, go to step 2.

#include<conio.h>
#include<stdio.h>
int n,i,j,k,t;
int check(int s[],int p)
       {  int ptr=0;
           for(int i=0;i<n;i++)
           {if(s[i]==p)
               ptr++;
      }
            if(ptr==0)
            return 1;
            else
            return 0;
        }

int main()
{
     printf("enter the no of jobs      : ");
     scanf("%d",&n);
     int slot[n],profit,p[n],d[n];
     for(i=0;i<n;i++)
       {printf("\n enter the profit of job #%d      :",i+1);
       scanf("%d",&p[i]);
       printf("\n enter the deadline of job #%d    :",i+1);
       scanf("%d",&d[i]);
       }

     for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
         if(p[i]<p[j])
            { t=p[i];
              p[i]=p[j];
              p[j]=t;
              t=d[i];
              d[i]=d[j];
              d[j]=t;
            }

       for(i=0;i<n;i++)
           slot[i]=0;

     for(i=0;i<n;i++)
         for(j=d[i];j>0;j--)
             {if(check(slot,j)==1)
                {slot[i]=j;
                break;}
             }

     printf("\n\n INDEX   PROFIT  DEADLINE  SLOT ALLOTTED ");
     for(i=0;i<n;i++)
     {if(slot[i]>0)
     printf("\n\n   %d       %d        %d        [%d - %d]", i+1,p[i],d[i],(slot[i]-1),slot[i]);
     else
     printf("\n\n   %d       %d        %d       REJECTED", i+1,p[i],d[i]);
     }

       getch();
}
