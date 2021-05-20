#include<stdio.h>
main()
{
	double a,b,c,d,e,f,g;
	
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	scanf("%lf",&f);
	
	g=(b*c)+(e*f);
	
	printf("VALOR A PAGAR: R$ %.2lf\n",g);
	
	return 0;
}
