#include<stdio.h>
#include <string.h>
#include <stdlib.h>
char* substr(const char *src, int m, int n)
{
    int len = n - m;
    char *dest = (char*)malloc(sizeof(char) * (len + 1));
    strncpy(dest, (src + m), len);
    return dest;
}

int main(){
    system("cls");
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int a,b,c=0,d,e,f,j,k,l;

        char s[200010]; 
        scanf("%s", &s); 

        for(j=strlen(s);j>=0;j--){
			if(s[j]+s[j+1]-48*2>9){
				b=s[j]+s[j+1]-48*2;
				s[j+1]=b%10+48;
				s[j]=b/10+48;
				c=1; 
				printf("%s", s);
				break; 
			} 
		} 

        if(c==0) {
			printf("%d", s[0] - '0' + s[1] - '0');
			
			if (strlen(s) > 2) {
				char chaydilamontaolaymay[strlen(s)-2];
				strcpy(chaydilamontaolaymay, s+2);
				printf("%s", chaydilamontaolaymay);
			}
			
		}
        
        printf("\n"); 
    }
}