#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a == 0 && b == 0 && c == 0) {
        printf("VO SO NGHIEM");
        return 0;
    }
    if (a == 0 && b == 0 && c != 0) {
        printf("VO NGHIEM");
        return 0;
    }
    double denta = b*b - 4*a*c;
    if (denta < 0) {
        printf("VO NGHIEM");
    }
    else if (denta == 0) {
        long double x = 1.0*(-b+sqrt(denta))/2*a;
        printf("%.2Lf", x);
    } 
    else {
        long double x1 = 1.0*(-b+sqrt(denta))/(2*a);
        long double x2 = 1.0*(-b-sqrt(denta))/(2*a);
        if (x1 > x2) {
            printf("%.2Lf %.2Lf", x1, x2);
        } else {
            printf("%.2Lf %.2Lf", x2, x1);
        }
        
        }

    return 0;
}