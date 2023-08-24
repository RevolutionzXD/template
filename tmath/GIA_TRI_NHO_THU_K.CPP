// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e4 + 5;


ll a[MAXN][MAXN];
vector <ll> v;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll m, n, k;

	cin >> m >> n >> k;

	for ( ll i = 1 ; i <= m; i++ ) {
        for ( ll j = 1; j <= n; j++ ) {
            a[i][j] = i * j;
            v.push_back( a[i][j] );
        }
	}

	sort ( v.begin() , v.end() );

	cout << v[k];


	return 0;
}



