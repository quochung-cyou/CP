#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <queue>
#include <cstring>
#include <set>
#include <bitset>
#include <map>
#include <chrono>
#include <random>
#include <unordered_map>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
 
 
typedef long long ll;
const int MOD = 1000000007; 
typedef long double ld;
#define db(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
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
const int INF = int(1e9) + 5;
vector<int> cost(2 * 1005 + 1, INF);
 

//3 10 20 3 4 5
//1 10 3 1 4 2 7 5 8
using namespace std;



//1000000000000 100000
//100 200 794576212


struct node {
	int data;
	struct node *pLeft;
	struct node *pRight;
};

typedef struct node NODE;
typedef NODE* TREE;
 

void createtree(TREE &tree) {
	tree = NULL;
}

void inserttree(TREE &tree, int so, int n) {
	if (so >= pow(2,n)) return;
	if (tree == NULL) {
		tree = new NODE;
		tree->data = so;
		tree->pLeft = NULL;
		tree->pRight = NULL;
	}
	inserttree(tree->pLeft, so*2, n);
	inserttree(tree->pRight, so*2+1, n);
}

void NLR(TREE t) {
	if (t != NULL) {
		cout << t->data << " ";
		NLR(t->pLeft);
		NLR(t->pRight);
	}
}

void LNR(TREE t) {
	if (t != NULL) {
		LNR(t->pLeft);
		cout << t->data << " ";
		LNR(t->pRight);
	}
}


void LRN(TREE t) {
	if (t != NULL) {
		LRN(t->pLeft);
		LRN(t->pRight);
		cout << t->data << " ";
	}
}
//LNR trung thứ tự
//NLR tiền thứ tự
//LRN hậu thứ tự

int main()
{
	
	string t; cin >> t;
	int kq = 1;
	for (int i = 0; i < t.length(); ) {
		if (t[i] == '1' && t[i+1] == '4' && t[i+2] == '4') {
			i += 3;
		} else if (t[i] == '1' && t[i+1] == '4') {
			i += 2;
		} else if (t[i] == '1') {
			i++;
		} else {
			kq = 0;
			break;
		}
	}

	if (kq) cout << "YES";
	else cout << "NO";

	
	
}
 
//BBGBGBGB
//BGBGBGBB
//GBGBGBBB
//GGBGBBBB
 
 
//Random function stuff 
 
void sortday(int t, int a[]) {
    for (int i = 0; i < t-1; i++)     //bubble sort day chinh
	for (int j = 0; j < t-i-1; j++)
	if (a[j] > a[j+1]) {
		int tmp = a[j];  
		a[j] = a[j+1];
		a[j+1] = tmp;
	}
}
 
void split(string s, string sep)
{
    size_t e1 = s.find_first_of(sep);
    string p1 = s.substr(0, e1);
    string p2 = s.substr(e1 + 1);
}
 