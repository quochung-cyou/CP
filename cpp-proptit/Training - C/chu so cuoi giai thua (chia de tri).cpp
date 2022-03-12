#include <stdio.h>
#include <math.h>
 
 
 
long long tinhnho(long long a)
{
    long long fact = 1, kqx;
    for(long long i=1;i <= a;i++) fact *= i; 
    while (1) {
        kqx = fact % 10;
        if (kqx == 0) {
            fact /= 10;
        }
        else break;
    }
    return kqx;
}
 
long long mul(long long x) {
    switch (x % 4) {
        case 1: {
            return 2;
        }
        case 2: {
            return 4;
        }
        case 3: {
            return 8;
        }
        case 0: {
            return 6;
        }
    }
}


long long tinhlon(long long a) {
    long long x = (a - a % 5) / 5;
    long long y = a % 5;
    long long a1 = mul(x);
    long long lx, ly;


    if (x > 15) lx = tinhlon(x);
    else lx = tinhnho(x);
    if (y > 15) ly = tinhlon(y);
    else ly = tinhnho(y);

    return a1*lx*ly;
}



int main()
{
    long long a;
    scanf("%lld", &a); 


    printf("%lld ", tinhlon(a) % 10);


    return 0;
}