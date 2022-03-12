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
 
int checkform(long long a1, long long a2, long long a3) {
    if (a2 - a1 == a3 - a2) return 1;
    else return 0;
}
 
 
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
 
        long long a1, a2, a3, max;
        int kq = 0;
        scanf("%lld %lld %lld", &a1, &a2, &a3);
        long long a1expect = a2-(a3-a2);
        long long a2expect = a1+(a3-a1)/2;
        long long a3expect = a2+(a2-a1);
        if (a1expect % a1 == 0 && a1expect >= a1 && checkform(a1expect, a2, a3)) printf("YES\n");
        else if (a2expect % a2 == 0 && a2expect >= a2 && checkform(a1, a2expect, a3)) printf("YES\n");
        else if (a3expect % a3 == 0 && a3expect >= a3 && checkform(a1,a2,a3expect)) printf("YES\n");
        else printf("NO\n");
 
 
    }
}
