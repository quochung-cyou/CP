#include <stdio.h>
#include <math.h>

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
            if (tempi % 10 == 4) return 0;
            tempi /= 10;
        }
    return 1;
}
long long div10(long long a)
{
    long long sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    if (sum % 10 == 0)
        return 1;
    else
        return 0;
}
long long getmax(long long n)
{
    long long kq = 1;
    while (n != 0)
    {
        kq *= 10;
        n--;
    }
    return kq;
}

int main() 
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        long long a;
        scanf("%lld", &a);
        for (int i = getmax(a-1); i < getmax(a); i++) {
            if (div10(i) && checknumber(i) && pari(i)) {
                printf("%lld ", i);
            }
            
        }

        printf("\n");
        

    }
    return 0;
}