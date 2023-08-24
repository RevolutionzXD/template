// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;


pair <ll,ll> a[MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n, m; cin >> n >> m;
	
	for ( ll i = 1; i <= m; i++ ) {
		cin >> a[i].first >> a[i].second;
	}

	ll t; cin >> t;
	while ( t-- ) {
		ll x; cin >> x;
		
		vector <ll> v;
		ll cnt = 0;
		for ( ll i = 1; i <= m; i++ ) {
			if ( a[i].first == x ) {
			cnt++;
			v.push_back ( a[i].second );
			}
		}
		
		sort ( v.begin(), v.end() );
		
		cout << cnt << " ";
		for ( ll i : v ) cout << i << " ";
 		cout << endl;

		
		
	}

	


	return 0;
}


