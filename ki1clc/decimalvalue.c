#include <stdio.h>




int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        int a;
        scanf("%d", &a);
        printf("%.15Lf\n", (long double) 1/a);
        
    }



}