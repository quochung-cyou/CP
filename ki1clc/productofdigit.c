#include <stdio.h>




int main()
{
        long a;
        scanf("%ld", &a);
        long sum = 1;
        while (a > 0) {
            sum *= a%10;
            a /= 10;
        }
        printf("%ld\n", sum);




    return 0;
}