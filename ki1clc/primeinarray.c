#include<stdio.h>
#include <math.h>
int pn(int a) {
    if (a < 2) {
        return 0;
    }
    for (int i = 2; i <= (int) sqrt(a); i++) {
        if (a % i == 0) return 0;
    }
    return 1;
}


int main()
{
	int a,b,i,j,c,d;
	scanf("%d\n",&a);
	int w[1000];
    int s[1000][100];
    for(i=0;i<a;i++)
	{
		scanf("%d",&w[i]);
    	for(j=0; j<w[i]; j++)
    	{     	
        	scanf("%d",&s[i][j]);
        	if(j>=w[i])break;
    	}
    }
	for(i=0;i<a;++i)
	{
    	for(j=0;j<w[i];++j)
	    if(pn(s[i][j])==1) printf("%d ",s[i][j]);
	    printf("\n");
    }
    return 0;
}