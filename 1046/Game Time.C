#include<stdio.h>
main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    if(a==b) printf("O JOGO DUROU 24 HORA(S)\n");
    else if(a>b) printf("O JOGO DUROU %d HORA(S)\n",(b+24)-a);
    else if (a<b) printf("O JOGO DUROU %d HORA(S)\n",b-a);
}
