#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++)
    {
        long long a, digit, kq = 1;
        scanf("%lld", &a);
        while (a > 0) {
            digit = a % 10; 
            if (digit % 2 == 1) {
				kq = 0;
                break;
			}
            a /= 10; 
 		}
		if (kq == 1) printf("YES\n");
		else printf("NO\n");

        
    }
    return 0;
}