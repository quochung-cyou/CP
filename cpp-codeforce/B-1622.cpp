#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <string>
#include <algorithm>
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
 
//1 3 3 1 2 111

int main()
{
    int t;
    cin >> t;
    
    while (t) {

        int n, count = 0;
        cin >> n;
        int a[n];
        vector<int> pdislike, plike;
        for (int i = 0; i < n; i++) cin >> a[i];
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                pdislike.push_back(a[i]);
                count++;
            }
            else plike.push_back(a[i]);
        }

        sort(pdislike.begin(), pdislike.end());
        sort(plike.begin(), plike.end());
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1') cout << upper_bound(plike.begin(), plike.end(), a[i]) - plike.begin() + count << ' ';
            else cout << upper_bound(pdislike.begin(), pdislike.end(), a[i]) - pdislike.begin() << ' '; 
        }
        cout << "\n";
        t--;
    }
}