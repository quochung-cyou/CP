#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n > 0) {
		int soluong, vitrimax = 0,max = -1e7, max2 = -1e7, comax2 = 0;
		scanf("%d", &soluong);
		int a[soluong];
		for (int i = 0; i < soluong; i++) {
			scanf("%d", &a[i]);	
			if (a[i] > max) max = a[i];
		}
		printf("%d\n", max);
		for (int i = 0; i < soluong; i++) if (a[i] == max) printf("%d ", i);
		printf("\n");
		n--;
	}
}