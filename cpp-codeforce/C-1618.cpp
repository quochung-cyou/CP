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

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a, check1 = 1, check2 = 1; 
        cin >> a;
        long long x[a], g1 = 0, g2 = 0;
        FOR(i, a) {
            cin >> x[i];
            if(i % 2) g1 = __gcd(g1, x[i]);
			else g2 = __gcd(g2, x[i]);
        }

        FOR(i, a) {
            if(i % 2 && x[i] % g2 == 0) {
                check1 = 0;
                //break;
            } else if (i % 2 == 0 && x[i] % g1 == 0) {
                check2 = 0;
                //break;
            }
        }
        
        if (check1) cout << g2 << endl;
        else if (check2) cout << g1 << endl;
        else cout << "0" << endl;
    }
}