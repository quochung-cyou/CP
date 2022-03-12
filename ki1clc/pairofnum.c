#include <stdio.h>
#include <math.h>

long long gcd(long long a, long long b)
{
    long long gcd;
    for (int i = 1; i <= a && i <= b; ++i)
    {

        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

int main()
{
    int test;
    scanf("%d\n", &test);
    for (int c = 0; c < test; c++)
    {

        long long a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if (gcd(a, b) == gcd(c,d)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}