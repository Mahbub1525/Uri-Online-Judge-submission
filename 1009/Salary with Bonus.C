#include<stdio.h>
main()
{
	char s[20];
	double a,b,c;
	
	scanf("%s",&s);
	scanf("%lf",&a);
	scanf("%lf",&b);
	
	
	c=a+(b*.15);
	
	printf("TOTAL = R$ %.2lf\n",c);
	
	return 0;
}
