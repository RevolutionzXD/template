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


ll a[105][MAXN], v[105], w[105];

ll n, s;



void input() {
	
	cin >> n >> s; 
	
	for ( ll i = 1; i <= n; ++i ) {
		cin >> w[i] >> v[i];
	}
	
}

void dp() {
	
	for ( ll i = 1; i <= n; ++i ) {
		for ( ll j = 1; j <= s; ++j ) {
			a[i][j] = a[i - 1][j];
			if ( j >= w[i] ) a[i][j] = max( a[i][j], a[i - 1][j - w[i]] + v[i] );
		}
	}
	
	cout << a[n][s];
	
}





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	input();
	dp();

	return 0;
}


