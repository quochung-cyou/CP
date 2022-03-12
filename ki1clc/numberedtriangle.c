#include <stdio.h>
#include <math.h>



int main() 
{
    long long n, a = 1, tempa = 1;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) tempa = a;
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0) printf("%d ", tempa + i - 1);
            else printf("%d ", a);
            a++;
            tempa--;
            
        }
        printf("\n");
    }
    
    return 0;
}