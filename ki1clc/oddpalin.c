#include <stdio.h>
#include <math.h>

int pari(long long n)
{
    long long rev = 0, rm, ntmp = n;
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

int checknumber(long long n) {
    long long tempi = n;
    while (tempi > 0)
        {
            if (tempi % 2 == 0) return 0;
            tempi /= 10;
        }
    return 1;
}

int checksum(long long a)
{
    long long sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    if (sum % 2 == 1)
        return 1;
    else
        return 0;
}

int main() 
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        long long a;
        scanf("%lld", &a);
        if (checknumber(a) && checksum(a) && pari(a)) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}