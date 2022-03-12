#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#ifndef LOCAL
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#endif
typedef long long ll;
const int MOD = 1000000007;
typedef long double ld;

/////////////////////////////////////////////
//                _oo0oo_                  //
//               o8888888o                 //
//               88" . "88                 //
//               (| ^_^ |)                 //
//               0\  =  /0                 //
//            ____/`---`\____              //
//          .'  \\|     |//  `.            //
//         /  \\|||  :  |||//  \           //
//        /  _||||| -:- |||||-  \          //
//        |   | \\\  -  /// |   |          //
//        | \_|  ``\---/''  |   |          //
//        \  .-\_   `-`   __/-. /          //
//       __`. .'  /--.--\  `. . __         //
//     ."" '< `.__\_<|>_/__.'  >'"".       //
//   | | :  `-\`.;`\ _ /`;.`/ - `: | |	   //
//   \  \ `-.  \_ __\ /__ _/   .-`/  /     //
//*****`-.___`-.___\____/____.-'___.-'*****//
//                 `=--='                  //
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//		      NO WA - NO TLE               //
/////////////////////////////////////////////
//NGUYEN QUOC HUNG

#define ull unsigned long long int

#include<stdio.h>
 
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int j,k,m,a=0,b,c,d,e, kq = 0;
        scanf("%d",&m);
        int s[m];
        int danhdau[150001] = {};
        for (int i = 0; i < 150001; i++) danhdau[i] = 1e9;
        for(j=0;j<m;j++)
        scanf("%d",&s[j]);
 
        for(j=0;j<m;j++){
            if (danhdau[s[j]] != 1e9) {
                //printf("found %d\n", j);
                a = max(danhdau[s[j]] + m - j,a);
                kq = 1;
            }
            danhdau[s[j]] = j;
            
        } 
        if (kq) printf("%d\n",a); 
		else printf("-1\n");
    }
}

