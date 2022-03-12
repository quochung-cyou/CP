#include <stdio.h>




int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++)
    {
        long long a;
        int boolean = 1;
        scanf("%lld", &a);
        if (a > 1)
        {
            for (int b = 2; b < a; b++)
            {
                if (a % b == 0) {
                    boolean = 0;
                    break;
                }
            }




        if (boolean == 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
        
        } else {
            printf("NO\n");
        }

        
        
    }
    return 0;
}