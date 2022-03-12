#include <stdio.h>
#include <math.h>

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

int allnumberprime(int n) {
    int tempi = n;
    while (tempi > 0)
        {
            if (checkprime(tempi % 10) == 0) return 0;
            tempi /= 10;
        }
    return 1;
}


int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++)
    {
        long long a, b, amount = 0;
        scanf("%lld %lld", &a, &b);
        for (int i = a; i <= b; i++)
        {
            int ketqua = 1;
            if (checkprime(i) && allnumberprime(i)) amount++;
        }

        printf("%lld\n", amount);
    }
    return 0;
}