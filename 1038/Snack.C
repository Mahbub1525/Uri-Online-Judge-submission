#include<stdio.h>

main()
{
    int x,y;
    float total;
    scanf("%d %d",&x,&y);

    switch(x){
        case 1:
            total=4.00*y;
        break;
        case 2:
            total=4.50*y;
        break;
        case 3:
            total=5.00*y;
        break;
        case 4:
            total=2.00*y;
        break;
        case 5:
            total=1.50*y;
        break;

    }
    printf("Total: R$ %.2f\n",total);


}
