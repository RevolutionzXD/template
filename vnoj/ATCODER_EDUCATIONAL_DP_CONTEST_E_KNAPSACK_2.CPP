// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf 8
using namespace std;
const ll MAXN = 1e5 + 5;
const ll INF = 1e15;

ll n, W, w[105], v[105], f[102][100002];

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	memset(f, 0x3f, sizeof(f));
	f[0][0] = 0;
	cin >> n >> W;
	for (ll i = 1; i <= n; i++) cin >> w[i] >> v[i];
	for (int i = 1; i <= n; i++)
		for (int j = 0; j <= n * 1000; j++){
			f[i][j] = f[i - 1][j];
			if (j >= v[i]) f[i][j] = min(f[i][j], f[i - 1][j - v[i]] + w[i]);
		}
	ll res = 1e17;
	for (int i = 1; i <= n * 1000; i++) if (f[n][i] <= W) res = i;
	cout << res;
}