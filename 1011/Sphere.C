#include<stdio.h>
main()
{
	double a,R,pi=3.14159;
	
	scanf("%lf",&R);
	
	a=((4.0/3)*pi*R*R*R);
	
	printf("VOLUME = %.3lf\n",a);
	
	return 0;
}
