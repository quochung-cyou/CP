#include <stdio.h>
#include <math.h>

int max(long a, long b) {
    if (a>b) return a; 
    else return b;
}


long quayhinh(long a1, long a2, long a3, long h1, long h2, long h3) {
    if (a1 == a2 + a3 && a1 == h1 + h2 && h2 == h3) {
        return 0;
    } else {
        return 1;
    }
    
}



int main()
{
    long x1, y1, x2, y2, x3, y3;
    scanf("%ld %ld", &x1, &y1);
    scanf("%ld %ld", &x2, &y2);
    scanf("%ld %ld", &x3, &y3);

    if (x1 < y1) {
        int tmp = x1;
        x1 = y1;
        y1 = tmp;
    }
    if (x2 < y2) {
        int tmp = x2;
        x2 = y2;
        y2 = tmp;
    }
    if (x3 < y3) {
        int tmp = x3;
        x3 = y3;
        y3 = tmp;
    }


    int ans = 1;
    if (x1 == x2 && x2 == x3 && y1 + y2 + y3 == x1) {
        ans = 0;
    } else if ( quayhinh(x1, x2, x3, y1, y2, y3) == 0 || quayhinh(x1, y2, y3, y1, x2, x3) == 0 ||
               quayhinh(x1, x2, y3, y1, y2, x3) == 0 || quayhinh(x1, y2, x3, y1, x2, y3) == 0 ||
               quayhinh(x2, x1, x3, y2, y1, y3) == 0 || quayhinh(x2, y1, y3, y2, x1, x3) == 0  ||
               quayhinh(x2, y1, x3, y2, x1, y3) == 0 || quayhinh(x2, x1, y3, y2, y1, x3) == 0 ||
               quayhinh(x3, x2, x1, y3, y2, y1) == 0 || quayhinh(x3, y2, y1, y3, x2, x1) == 0 ||
               quayhinh(x3, y2, x1, y3, x2, y1) == 0 || quayhinh(x3, x2, y1, y3, y2, x1) == 0) {
        ans = 0;
    }

    if (ans == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    
    
}