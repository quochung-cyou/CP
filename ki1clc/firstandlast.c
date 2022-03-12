#include <stdio.h>



int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        long a;
        scanf("%ld", &a);
        int lastdegit = a%10;
        while (a > 10) {
            a /= 10;
        }
        if (a == lastdegit) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }
    return 0;
}