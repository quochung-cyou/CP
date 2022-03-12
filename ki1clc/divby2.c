#include <stdio.h>
#include <math.h>



int main()
{

    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++)
    {

        long long a, digit, ketqua = 1;
        scanf("%lld", &a);
        long long count = 0;
 
        for (long long i = 1; i <= sqrt(a); i++)
        {
 
            if (a % i == 0 && i % 2 == 0) count++;
            if (a % i == 0 && (a / i) % 2 == 0) count++;
            if ((i * i == a) && (i % 2 == 0)) count--;
        }
        printf("%lld\n", count);
    
        
    }

    return 0;
}