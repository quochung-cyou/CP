#include <stdio.h>
//4 5 7 3 2
int main()
{
	int t, vitrisort;
	scanf("%d", &t);
	int a[t];
	for (int i = 0; i < t; i++) scanf("%d", &a[i]);
	


	for (int i = 0; i < t-1; i++) {
		int min = a[i];
		for (int j = i+1; j < t; j++) {
			if (a[j] < min) {
				vitrisort = j;
				min = a[j];
			}
		}

		int tmp = a[i];
		a[i] = a[vitrisort];
		a[vitrisort] = tmp;
		printf("Step %d: ", i+1);
		for (int z = 0; z < t; z++) printf("%d ", a[z]);
		printf("\n");
	}
	

}