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
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

typedef long long ll;
const int MOD = 1000000007;
typedef long double ld;
#define db(x) cout << (x) << '\n';
#define faster()                  \
	ios_base::sync_with_stdio(0); \
	cin.tie(NULL);                \
	cout.tie(NULL);
#define FORAB(i, a, b) for (int i = a; i < (b); i++)
#define FOR(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
// 1 3 3 1 2 111

int dem = 0;
bool checkok(vector<string> &bang, int cot, int hang)
{
	// kiemn tra cot
	for (int i = cot; i >= 0; --i)
		if (bang[i][hang] == 'Q')
			return false;
	// kiem tra cheo trai
	for (int i = cot, j = hang; i >= 0 && j >= 0; --i, --j)
		if (bang[i][j] == 'Q')
			return false;
	// kiem tra cheo phai
	for (int i = cot, j = hang; i >= 0 && j < bang.size(); --i, ++j)
		if (bang[i][j] == 'Q')
			return false;
	return true;
}

void Try(vector<string> &bang, int cot)
{
	if (cot == bang.size())
	{
		//cout << "duoc1\n";
		dem++;
		return;
	}
	for (int i = 0; i < bang.size(); ++i)
	{
		if (checkok(bang, cot, i))
		{
			//cout << "duoc\n";
			bang[cot][i] = 'Q';
			//dem++;
			Try(bang, cot + 1);
			//quay lui
			bang[cot][i] = '.';
		}
	}
}

int main()
{
	int n;
	cin >> n;
	vector<string> bang(n, string(n, '.'));
	Try(bang, 0);
	cout << dem << endl;
}
