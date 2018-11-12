#include<stdio.h>
#include<stdio.h>
int main()
{
    double x1,x2,y1,y2,res;
    scanf("%lf%lf%lf%lf",&x1,&x2,&y1,&y2);
    res=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.4lf",res);
    return 0;

}
