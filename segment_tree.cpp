// Nguyen Thien Nhan (tomato)
#include <bits/stdc++.h>
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,popcnt")

using namespace std;

#define TASK "A"
#define int long long
#define fi first
#define se second
#define inf 1e18
#define BIT(x, i) (((x) >> (i)) & (1LL))
#define MASK(i) ((1LL) << (i))
#define ii pair<int, int>

template<class T> bool maximize(T &a, const T &b) {
    return a < b ? a = b, 1 : 0;
}
 
template<class T> bool minimize(T &a, const T &b) {
    return a > b ? a = b, 1 : 0;
}

const int MAXN = 1e5 + 5;
const int MAXM = 2e5 + 5;
const int MOD = 1e9 + 7;

struct Node {
	int val, lazy;
};


//---------Variable---------//

int num, numQuery;
int arr[MAXN];
Node st[4 * MAXN];

//--------------------------//


int unite(int a, int b) {
	return max(a, b);
}

void build(int id, int l, int r) {
	if (l == r) {
		st[id].val = arr[l];
		return;
	}
	int mid = (l + r) >> 1;
	build(id << 1, l, mid);
	build((id << 1) | 1, mid + 1, r);
	st[id].val = unite(st[id << 1].val, st[(id << 1) | 1].val);
}

void down(int id) {
	int t = st[id].lazy;
	st[id << 1].val += t;
	st[id << 1].lazy += t;
	st[(id << 1) | 1].val += t;
	st[(id << 1) | 1].lazy += t;
	st[id].lazy = 0; 
}

void update(int id, int l, int r, int u, int v, int i) {
	if (r < u || l > v) return;
	if (u <= l && r <= v) {
		st[id].val += i;
		st[id].lazy += i;
		return;
	}
	down(id);
	int mid = (l + r) >> 1;
	update(id << 1, l, mid, u, v, i);
	update((id << 1) | 1, mid + 1, r, u, v, i);
	st[id].val = unite(st[id << 1].val, st[(id << 1) | 1].val);
}

int get(int id, int l, int r, int u, int v) {
	if (r < u || l > v) return -inf;
	if (u <= l && r <= v) return st[id].val;
	down(id);
	int mid = (l + r) >> 1;
	int get1 = get(id << 1, l, mid, u, v);
	int get2 = get((id << 1) | 1, mid + 1, r, u, v);
	return unite(get1, get2);
}


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // freopen(TASK".INP", "r", stdin);
    // freopen(TASK".OUT", "w", stdout);

    cin >> num;
    for (int i = 1; i <= num; ++i) cin >> arr[i];
   	build(1, 1, num);
    cin >> numQuery;
	int type = 0;
	while(numQuery--) {
		cin >> type;
		if (type == 1) {
			int u, v, delta; cin >> u >> v >> delta;
			update(1, 1, num, u, v, delta);
		}
		if (type == 2) {
			int u, v; cin >> u >> v;
			cout << get(1, 1, num, u, v) << '\n';
		}
	}
    
 

    return 0;

}