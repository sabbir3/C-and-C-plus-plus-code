#include<stdio.h>

int main()
{
    int starth, endh, startm, endm,h,m;

    scanf("%d%d%d%d",&starth,&startm,&endh,&endm);


    h=endh-starth;
    m=endm-startm;

    if(h<0){

        h=24+(endh-starth);

    }
    if(m<0){

        m=60+(endm-startm);
        if(h==0){
            h=23;
        }
        else
            h--;
    }
    if(starth==endh && startm==endm){

        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }


    return 0;
}
