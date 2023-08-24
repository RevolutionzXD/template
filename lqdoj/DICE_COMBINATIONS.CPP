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
const ll mod = 1e9 + 7;


ll n;
ll dp[MAXN];



signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	
	dp[0] = 1;
	for ( ll i = 1; i <= n; ++i ) 
		for ( ll j = 1; j <= 6 && i - j >= 0; ++j ) {
			dp[i] = ( dp[i] + dp[i - j] ) % mod;
		}

	cout << dp[n];
	
	return 0;
}


