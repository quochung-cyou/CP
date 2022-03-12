#include <stdio.h>




int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        long long a;
        scanf("%lld", &a);
        int sum = 0;
        while (a > 0) {
            sum += a%10;
            a /= 10;
        }
        if (sum % 10 == 0) {
            printf("YES\n");
        } else {
             printf("NO\n");
        }

        
        
    }


    return 0;
}