#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
 
	int n, somaxlonnhat = 1;
	scanf("%d", &n);
	char s[n];
	int dem[130] = {0};
	scanf("%s", s);
	for (int i = 0; i < n; i++)
	{
		dem[s[i]]++;
		if (dem[s[i]] > somaxlonnhat) somaxlonnhat = dem[s[i]];
	}
	if (somaxlonnhat > (n+1)/2)
		printf("So ugly");
	else
		printf("So beautiful");
}