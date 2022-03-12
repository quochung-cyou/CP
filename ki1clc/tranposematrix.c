
#include <stdio.h>
#define max 100
void nhap (int m, int n, int a[][max]) {
for (int i=0; i<m; i++)
    for (int j=0; j<n; j++)
    scanf ("%d", &a[i][j]);
    
    }
int main ()
{
int m,n ;
int a[max][max];
scanf ("%d%d", &m, &n);
nhap (m, n, a);
for (int i=0; i<n; i++){

    for (int j=0; j<m; j++) {
    printf ("%d ", a[j][i]);
    
    }
    printf ("\n");
    
}



return 0;
}