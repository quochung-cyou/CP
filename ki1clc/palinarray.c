#include <stdio.h>
#include <math.h>



int main() 
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++) {
        int amount, ketqua = 1;
        scanf("%d\n", &amount);
        long long a[101] = {};
        long long b[101] = {};
        for (int d = 0; d < amount; d++) 
        {
            long long x;
            scanf("%lld", &x);
            a[d] = x;
            b[amount-1-d] = x;
        }



        for (int d = 0; d < amount; d++) 
        {
            if(a[d] != b[d]) ketqua = 0;
        }

        if (ketqua) printf("YES\n");
        else printf("NO\n");


        

    }
    
    return 0;
}