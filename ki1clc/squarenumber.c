#include <stdio.h>
#include <math.h>



int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        double x;

        double sq;

        scanf("%lf",&x);

        sq = sqrt(x); 
        if( sq == (int)sq )
            printf("YES\n");
        else
            printf("NO\n");

        
        
    }


    return 0;
}