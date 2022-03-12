#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
    int gcd = 0;
    for(int i=1; i <= a && i <= b; ++i) {
        if (a%i==0 && b%i==0)  gcd = i; 
        
        }
    return gcd;
    
}

int main() 
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    for (int i = a; i <= b; i++) {
        for (int j = i; j <= b; j++) {
            if (j != i && gcd(j, i) == 1) printf("(%d,%d)\n", i, j);
        }
    }
    return 0;
}