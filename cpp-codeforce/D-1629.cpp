#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cfenv>
#include <cfloat>
#include <chrono>
#include <cinttypes>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <immintrin.h>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <streambuf>
#include <string>
#include <tuple>
#include <type_traits>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;


typedef long long ll;
const int MOD = 1000000007;
typedef long double ld;
#define FORAB(i, a, b) for (int i=a; i<(b); i++)
#define FOR(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
//1 3 3 1 2 111

string reverseStr(string& str)
{
    string newstr = str;
    int n = newstr.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++) swap(newstr[i], newstr[n - i - 1]);
    return newstr;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, count = 0;
        scanf("%d", &n);
        map<string, int> danhdau; 
        for (int i = 0; i < n; i++) {
            string nhap;
            cin >> nhap;
            if (nhap.size() == 1) count = 1;
            else if (nhap.size() == 2) {
                danhdau[nhap] = 1;
                if (danhdau[reverseStr(nhap)]) count = 1;
                
                for(int cx = 'a'; cx <= 'z'; cx++) {
                    int f = nhap[0];
			        int g = nhap[1];
				    string test = "";
                    test.pb(g); test.pb(f); test.pb(cx);
                    if (danhdau[test]) count = 1;
			}
            } else if (nhap.size() == 3) {
                danhdau[nhap] = 1;
                if (danhdau[reverseStr(nhap)]) count = 1; //break;
                string newstr = nhap.substr(1,2);
                if (danhdau[reverseStr(newstr)]) count = 1; //break;      
                newstr = nhap.substr(0,1);
                if (danhdau[reverseStr(newstr)]) count = 1; //break;             
            }
        }
        if (count) printf("YES\n");
        else printf("NO\n");
        danhdau.clear();
    }
}