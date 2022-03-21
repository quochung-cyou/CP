#include <stdio.h>
#include <math.h>
int main() {
	long long x1, y1;
    long long x2, y2;
    double r1, r2;
    scanf("%lld %lld", &x1, &y1);
    scanf("%lld %lld", &x2, &y2);
    scanf("%lf %lf", &r1, &r2);
    double khoangcach = (double) sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    if (khoangcach > (r1+r2)) {
    	
        printf("Don't Cut");
    }
    else if (khoangcach == (r1+r2)) {
        printf("Touch"); 
    }
    else {
        printf("Cut");
    }
    
    return 0;
	
	
}