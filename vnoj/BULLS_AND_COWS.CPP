// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;
const ll base = 2111992;

ll f[MAXN];
ll n, k;



signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n >> k;
	
	for ( ll i = 1; i < k + 2; ++i ) f[i] = ( i + 1 ) % base;
	for ( ll i = k + 2; i <= n; ++i ) f[i] = ( f[i - k - 1] % base + f[i - 1] % base ) % base;
	cout << f[n];


	return 0;
}


