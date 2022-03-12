#include <stdio.h>
#include <math.h>




int main()
{
        long long a, b;
        scanf("%lld %lld", &a, &b);
        int sqrta = sqrt(a);
        int sqrtb = sqrt(b);
        int soluong = 0;
        if (sqrta*sqrta >= a && sqrtb*sqrtb <= b) {
            soluong = sqrtb - sqrta + 1;
        } else {
            soluong = sqrtb - sqrta;
        }
        printf("%d\n", soluong);
        for (long long i = sqrta; i <= sqrtb; i++) {
            if (i*i >= a && i*i <= b) {
                printf("%d\n", i*i);
            }
        }
    return 0;
}