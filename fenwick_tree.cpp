// Nguyen Thien Nhan (tomato)
#include <bits/stdc++.h>
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,popcnt")

using namespace std;

#define TASK "A"
#define ll long long
#define fi first
#define se second
#define inf 1e9
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


//---------Variable---------//

int numArr, query;
int arr[MAXN];
ll bit[MAXN];

//--------------------------//


void update(int u, int v) {
	while(u <= numArr) {
		bit[u] += v;
		u += u & (-u);
	}
}


ll get(int u) {
	ll res = 0;
	while(u > 0) {
		res += bit[u];
		u -= u & (-u);
	}
	return res;
}


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    freopen(TASK".INP", "r", stdin);
    freopen(TASK".OUT", "w", stdout);

	cin >> numArr;
	for (int i = 1; i <= numArr; ++i) {
		cin >> arr[i];
		update(i, arr[i]);
	}
	cin >> query;
	while(query--) {
		int type, x, y; cin >> type >> x >> y;
		if (type == 1) {
			arr[x] += y;
			update(x, y);
		}
		if (type == 2) {
			update(x, y - arr[x]);
			arr[x] = y;
		}
		if (type == 3) {
			cout << get(y) - get(x - 1) << '\n';
		}
	}


    return 0;

}















