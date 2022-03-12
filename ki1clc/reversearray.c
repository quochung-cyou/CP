#include <stdio.h>
#include <math.h>




int main()
{
    int amount;
    scanf("%d\n", &amount);
    int a[101] = {};
    for (int c = 0; c < amount; c++) 
    {
        int x;
        scanf("%d", &x);
        a[c] = x;
    }

    for (int c = amount - 1; c >= 0; c--) printf("%d ", a[c]);
    
    return 0;
}