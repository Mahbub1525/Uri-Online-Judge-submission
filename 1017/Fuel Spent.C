#include <stdio.h>
 
int main()
 {
    int a,b,c=12;
    float d;
    
    scanf("%d %d",&a,&b);
    
    d=((float)(a*b)/c);
            
    printf("%.3f\n",d);
 
    return 0;
}
