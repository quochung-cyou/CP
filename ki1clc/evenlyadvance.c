#include <stdio.h>
#include <math.h>



int geteven(long long n) {
    long long tempi = n, even = 0;
    while (tempi > 0)
        {
            if (tempi % 2 == 0) even++;
            tempi /= 10;
        }
    return even;
}

int getodd(long long n) {
    long long tempi = n, odd = 0;
    while (tempi > 0)
        {
            if (tempi % 2 == 1) odd++;
            tempi /= 10;
        }
    return odd;
}


int main() 
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        long long a;
        scanf("%lld", &a);
        if (geteven(a) > getodd(a) && a % 2 == 0) printf("YES\n");
        else printf("NO\n");
        

    }
    return 0;
}