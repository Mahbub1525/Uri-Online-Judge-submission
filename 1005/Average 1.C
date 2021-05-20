#include<stdio.h>
main()
{
	double A,B,X;
	
	scanf("%lf",&A);
	scanf("%lf",&B);
	
	X=((A*3.5)+(B*7.5))/(3.5+7.5);
	
	printf("MEDIA = %.5lf\n",X);
	
	return 0;
}
