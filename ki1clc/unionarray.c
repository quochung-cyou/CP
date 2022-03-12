#include <stdio.h>


//5 6 1 2 3 4 5 3 4 5 6 7 8
int main()
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int a[100000];
	int b[100000] = {0};
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	for (j = i; j < m+i; j++) scanf("%d", &a[j]); 
	
	int scs = j;
	for (int i = 0; i < scs-1; i++)     
	for (int j = 0; j < scs-i-1; j++)
	if (a[j] > a[j+1]) {
		int tmp = a[j];  
		a[j] = a[j+1];
		a[j+1] = tmp;
	}

	for (int i = 0; i < scs; i++) {
		if (b[a[i]] == 0) {
			b[a[i]]++;
			printf("%d ", a[i]);
		}
	}


	


	return 0;
}