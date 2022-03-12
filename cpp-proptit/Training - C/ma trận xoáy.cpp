#include <stdio.h>
#include <math.h>


/* 
1   2   3 
8  9  4
7  6  5 hang2
*/

int main()
{

	int n;
	scanf("%d", &n);
	int a[n][n]; //
	int sohang = n, socot = n, so = 1, vthang = 0, vtcot = 0;


	while (so <= n*n) {
		for (int i = vtcot;i < socot;i++) {
			a[vtcot][i] = so; //hang 0, chay cot tang dan
			so++;
		}
		for (int i = vthang+1; i < sohang; i++) {
			a[i][socot-1] = so; //chay cot cuoi, hang tang dan
			so++;
		}

		for (int i = socot - 2; i >= vtcot; i--) {
			a[sohang-1][i] = so; //chay hang cuoi, cot giam dan
			so++;
		}

		for (int i = sohang - 2; i > vthang; i--) {
			a[i][vtcot] = so; //cot dau, hang giam dan
			so++;
		}
	vthang++; vtcot++; sohang--; socot--; 
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
	

}