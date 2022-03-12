# include <stdio.h>
# include <math.h>
 
void check(long long n)
{
    
    while (n%2 == 0)
    {
        printf("2 ");
        n /= 2;
    }
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        while (n%i == 0)
            {
                printf("%lld ", i);
                n /= i;
            }
        }
    if (n > 2) printf ("%lld ", n);
    
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