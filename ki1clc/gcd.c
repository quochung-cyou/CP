#include <stdio.h>




int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++)
    {
        int a, b, gcd;
        scanf("%d %d", &a, &b);
        for(int i=1; i <= a && i <= b; ++i) {
        
        if (a%i==0 && b%i==0)  gcd = i;
           
        }

        printf("%d\n", gcd);
        

        
        
    }
    return 0;
}