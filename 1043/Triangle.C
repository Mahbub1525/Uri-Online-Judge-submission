#include<stdio.h>
main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);

    if(a+c>b&&a+b>c&&b+c>a)
    printf("Perimetro = %.1f\n",a+b+c);
    else
    printf("Area = %.1f\n",((a+b)/2)*c);
}
