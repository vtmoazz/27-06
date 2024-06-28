#include <stdio.h>

int main(){
	double a,b,c,x;
	printf("Enter a = "); scanf("%lf",&a);
    printf("Enter b = "); scanf("%lf",&b);
    printf("Enter c = "); scanf("%lf",&c);   
    if(a != 0 && (b!= 0 || c != 0)){
		x=(b+c)/a;
	}
	printf("OUTPUT");
    printf("%.2lf\n",x);
    return 0;
}
    
