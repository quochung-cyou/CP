#include <stdio.h>
#include <math.h>




int main()
{

    //a le b chan
    int amount, amounta = 0, amountb = 0;
    scanf("%d\n", &amount);
    int a[101] = {};
    int b[101] = {};
    for (int c = 0; c < amount; c++) 
    {
        int x;
        scanf("%d", &x);
        if (x % 2) {
            a[amounta] = x;
            amounta++;
        }
        else {
            b[amountb] = x;
            amountb++;
        }
    }
    for (int c = 0; c < amountb; c++) printf("%d ", b[c]);
    printf("\n");
    for (int c = 0; c < amounta; c++) printf("%d ", a[c]);
    
    
    return 0;
}