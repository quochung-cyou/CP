#include <stdio.h>

long long pari(long long n)
{
    long long rev = 0, rm, ntmp = n;
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

long long checknumber(long long n) {
    long long tempi = n;
    while (tempi > 0)
        {
            if (tempi % 10 == 6) return 1;
            tempi /= 10;
        }
    return 0;
}

long long last8(long long a)
{
    long long sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    if (sum % 10 == 8)
        return 1;
    else
        return 0;
}

int main()
{
        long long a, b;
        scanf("%lld%lld", &a, &b);
            if (a > b)
            {
            long long tmp = a;
            a = b;
            b = tmp;
            }
        for (long long i = a; i <= b; i++)
        {
            if (pari(i) && checknumber(i) && last8(i)) printf("%lld ", i);
        }

        

    return 0;
}