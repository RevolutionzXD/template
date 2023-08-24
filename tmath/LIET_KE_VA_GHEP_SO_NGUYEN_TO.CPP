// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 100;



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n; cin >> n;

	vector <ll> a (n);

	for ( ll i = 0; i < n; ++i ) cin >> a[i];

	ll i;

	for ( ll i = n - 1; ; --i )
        if ( a[i] > a[ i - 1 ] ) break;

	if ( i > 0 ) {
        ll k = i;

        for ( ll j = k; j < n; ++j )
            if ( a[j] > a[ i - 1 ] && a[j] < a[k] ) k = j;

        swap ( a[ i - 1 ], a[k] );

	}

    reverse ( a.begin() + 1, a.end() );

    for ( ll i = 0; i < n; ++i )
        cout << a[i] << " ";

	return 0;
}

