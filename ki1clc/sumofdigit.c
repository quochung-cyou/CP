#include <stdio.h>




int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        int a;
        scanf("%d", &a);
        int sum = 0;
        while (a > 0) {
            sum += a%10;
            a /= 10;
        }
        printf("%d\n", sum);

        
        
    }


    return 0;
}