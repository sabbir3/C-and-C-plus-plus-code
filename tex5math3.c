#include<stdio.h>
int main()
{
    double total_amount,interest_rate,monthly_amount,number_0f_years,loan_amount;
    printf("loan amount:");
    scanf("%lf",&loan_amount);
    printf("interest rate:");
    scanf("%lf",&interest_rate);
   // printf("total amount:");
    //scanf("%lf",&total_amount);
    printf("number 0f years:");
    scanf("%lf",&number_0f_years);
    //printf("monthly amount:");
    //scanf("%lf",&monthly_amount);

    total_amount=( loan_amount+ loan_amount*interest_rate/100 );
   // printf("total amount=%.2lf",total_amount);
    monthly_amount=(total_amount)/(number_0f_years*12 );
    printf("total amount= %.2lf\n monthly amount=%.2lf\n",total_amount,monthly_amount);
    return 0;


}
