#include <stdio.h>
#include <math.h>



int checknumber(long n) {
    long tempi = n;
    while (tempi > 0)
        {
            if (tempi % 10 == 9) return 0;
            tempi /= 10;
        }
    return 1;
}

int pari(long n)
{
    long rev = 0, rm, ntmp = n;
    ntmp = n;
    while (n != 0)
    {
        rm = n % 10;
        rev = rev * 10 + rm;
        n /= 10;
    }
    if (ntmp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    long long a, amount = 0;;
    scanf("%lld", &a);
    for (long i = 2; i < a; i++) {
        if (checknumber(i) && pari(i)) {
            printf("%ld ", i);
            amount++;
        }
    }
    printf("\n");
    printf("%lld", amount);
}