#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++)
    {
        long long a, digit, ketqua = 1;
        scanf("%lld", &a);
        int max = a % 10;
        while (a > 0) {
            digit = a % 10; 
            if (digit > max) {
                ketqua = 0;
                break;
            }
            a /= 10; 
        } //While
        
        if (ketqua == 1) printf("YES\n");
        else printf("NO\n");
        
    }
    return 0;
}