#include <stdio.h>
 
 
int main()
{
 
    long long a, b, c, amount = 0;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a%c != 0) a = a + (c- a%c);
    if (b % c != 0) b = b - b%c;
    long long sl = (b-a)/c + 1;
    printf("%lld", sl);
 
    return 0;
}