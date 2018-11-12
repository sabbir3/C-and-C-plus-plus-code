#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
int a[100],t[100],d[100],p[100],i,j,n,pos,temp;

clrscr();
printf("\n enter the number of jobs");
scanf("%d",&n);

for(i=0;i<n;i++)
a[i] = i+1;

printf("\n enter the time of processing for jobs");
for(i=0;i<n;i++)
scanf("%d",&t[i]);

printf("\n enter the deadline for jobs");
for(i=0;i<n;i++)
scanf("%d",&d[i]);

/*source code*/


printf("\n enter the profit for jobs");
for(i=0;i<n;i++)
scanf("%d",&p[i]);
int max;
//time sort
for(i=0;i<n-1;i++)
{
pos = i;
for(j=i+1;j<n;j++)
{
if(t[j]<t[pos])
{
pos = j;
}
}
if(pos != i)
{
//to swap positions
temp = a[i];
a[i] = a[pos];
a[pos] = temp;

temp = t[i];
t[i] = t[pos];
t[pos] = temp;

/*source code*/


temp = p[i];
p[i] = p[pos];
p[pos] = temp;

temp = d[i];
d[i] = d[pos];
d[pos] = temp;

}
}



//deadline sort
for(i=0;i<n-1;i++)
{
pos = i;
for(j=i+1;j<n;j++)
{
if(d[j]>d[pos])
{
pos = j;
}
}
if(pos != i)
{
//to swap positions
temp = a[i];
a[i] = a[pos];
a[pos] = temp;

/*source code*/


temp = t[i];
t[i] = t[pos];
t[pos] = temp;

temp = p[i];
p[i] = p[pos];
p[pos] = temp;

temp = d[i];
d[i] = d[pos];
d[pos] = temp;

}
}
max = d[0];


//profit sort
for(i=0;i<n-1;i++)
{
pos = i;
for(j=i+1;j<n;j++)
{
if(p[j]>p[pos])
{
pos = j;
}
}
if(pos != i)
{
//to swap positions
temp = a[i];
a[i] = a[pos];
a[pos] = temp;

/*source code*/


temp = t[i];
t[i] = t[pos];
t[pos] = temp;

temp = p[i];
p[i] = p[pos];
p[pos] = temp;

temp = d[i];
d[i] = d[pos];
d[pos] = temp;

}
}
printf("\n");
int profit = 0;

int flag,k;
int s,slot[100],c;
for(i=0;i<100;i++)
slot[i] = 0;
for(i=0;i<n;i++)
{
c=0;
k = d[i];
while(k>0)
{

/*source code*/


if(slot[k] == 0)
{
c++;
if(c == t[i])
{
profit += p[i];
for(j=k;j < k + t[i];j++)
{
slot[j] = a[i];
}
break;

}
}
else
c = 0;

k--;
}
}
for(i=1;i<=max;i++)
{
if((slot[i] != slot[i+1])&&(slot[i] != 0))
{
k = slot[i];

/*source code*/
printf(" %d",slot[i] );
if(i != max)
printf(" -> ");
}
}
printf("\n profit = %d " ,profit);
getch();
}
