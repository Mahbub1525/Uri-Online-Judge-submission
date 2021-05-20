#include<stdio.h>
main()
{
	double A,B,C,X;
	
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	X=((A*2)+(B*3)+(C*5))/(2+3+5);
	
	printf("MEDIA = %.1lf\n",X);
	
	return 0;
}
