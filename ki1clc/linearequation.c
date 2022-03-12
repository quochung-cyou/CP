#include<stdio.h>
const float pi = 3.141592653589793;



//----------------------------------------------------------------
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 0) {
        if (b == 0) {
            printf("Infinite solutions");
        } else {
            printf("No solution");
        }
    } else {
        printf("%.2f", (double) -b/a);
    }
}