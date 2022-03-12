#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++)
    {
        long long a, digit;
        scanf("%lld\n", &a);
        long long nodd = 0,  neven = 0;
        while (a > 0) {
            digit = a % 10; 
            if (digit % 2 == 1)
                nodd++;
            else neven++;
            a /= 10; 
 }
        printf("%lld %lld\n", nodd, neven);
    }
    return 0;
}