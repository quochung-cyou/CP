#include <stdio.h>
#include <math.h>

int max(int a, int b) {
    if (a < b) return b;
    else return a;
}

int min(int a, int b) {
    if (a < b) return a;
    else return b;
}

int main()
{
    int a1, b1, c1, d1;
    int a2, b2, c2, d2;
    scanf("%d %d %d %d\n", &a1, &b1, &c1, &d1);
    scanf("%d %d %d %d", &a2, &b2, &c2, &d2);
    
    int giatri1 = max(d1,d2)-min(b1,b2);
    int giatri2 = max(c1,c2)-min(a1,a2);


    int side = max(giatri1,giatri2);
    printf("%d", side*side);



    





}