#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <string>
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
 
int main()
{
    int n;
    scanf("%d", &n);
    
    while (n) {
        int a, b;
        vector<int> v;
        scanf("%d%d", &a, &b);
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                v.push_back(max(i, a-1-i) + max(j, b-1-j));
            }
        }
        sort(v.begin(), v.end());
        for (int i = 0; i <= a*b-1; i++) printf("%d ", v[i]);
        printf("\n");
        n--;
    }
}