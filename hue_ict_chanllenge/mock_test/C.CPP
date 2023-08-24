// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;
const ll MOD = 2021;

ll n;

void solve() {
	
	cin >> n;
	
	cout << ( ( n * ( n + 1 ) * ( ( 2 * n ) + 1 ) ) / 6 ) % MOD;
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	solve();

	return 0;
}


