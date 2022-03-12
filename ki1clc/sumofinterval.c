#include <stdio.h>
int main()
{
        int a, b;
        scanf("%d %d", &a, &b);
        long long sum = 0;
        if (a > b) {
            int temp = b;
            b = a;
            a = temp;
        }
        for (int i = a; i <= b; i++) {
            sum += i;
        }
        printf("%lld\n", sum);
    return 0;
}