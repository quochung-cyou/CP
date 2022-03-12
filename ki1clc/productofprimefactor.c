# include <stdio.h>
# include <math.h>
 
void check(long long n)
{
    long long tich = 1;
    while (n%2 == 0)
    {
        if (tich % 2 != 0) {
            tich *= 2;
        }
        n /= 2;

    }
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        while (n%i == 0)
            {
                if (tich % i != 0) {
                    tich *= i;
                }
                n /= i;
            }
        }
    if (n > 2) {
        if (tich % n != 0) {
                    tich *= n;
                }
    }
    printf("%d", tich);
}

int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        long long a;
        scanf("%lld", &a);
        check(a);
        printf(" \n");
    }
}