// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;

ll a[MAXN], d[MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

	ll n, res = 0; cin >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	d[1] = a[1];
	for ( ll i = 1; i <= n; i++ )
        for ( ll j = 1; j <= i - 2; j++ )
            d[i] = max ( d[i], d[j] ) + a[i];

	cout << *max_element ( d + 1, d + n + 1 );


	return 0;
}



