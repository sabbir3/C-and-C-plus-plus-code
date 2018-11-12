 #include<stdio.h>

   int main(){

        int b, a = 10;
        b = (a == 1) ? 20: 30;
        printf("b: %d, ",b);
        b = (a > 1) ? 20:30;
        printf("b: %d\n",b);
        b = (a <= 10) ? 10: 20;
        printf("b: %d\n ",b);

        return 0;    }

