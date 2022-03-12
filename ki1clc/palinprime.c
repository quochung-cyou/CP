# include <stdio.h>
# include <math.h>

int pari(int n)
{
    int rev = 0, rm, ntmp = n;
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

int checkprime(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}


int main()
{

    
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        int count = 0;
        for (long long i = a; i <= b; i++) {
            if (pari(i) && checkprime(i)) {
                if (count == 10) {
                    printf("\n");
                    count = 0;
                }
                count++;
                printf("%lld ", i);
            }
        }
        printf("\n\n");
    }
    return 0;
    
}