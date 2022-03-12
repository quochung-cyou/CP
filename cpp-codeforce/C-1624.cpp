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
int a[100000];
#include<stdio.h>
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1 ; i <= n ;i++){
            cin >> a[i];
            while(a[i]>n) a[i]/=2;
        }
        map<int,bool> m ;
        for(int i = 1 ; i <= n ;i++){
            if(m[a[i]] == 0) m[a[i]] = 1;
            else{
                while(a[i]){
                    a[i] /=2;
                    if(m[a[i]] == 0)
                    {
                        m[a[i]] = 1;
                        break ;
                    }
                }
            }
        }
        bool ok = 1;
        for(int i = 1 ; i <= n ; i++) if(m[i]==0) ok = 0;
        if(ok == 0) cout  << "NO\n";
        else cout << "YES\n";
    }
    return 0 ;
}

