// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


ll a[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, res = 0, k = 0;

    cin >> n;
    for ( ll i = 1; i <= n; i++ ) {
        cin >> a[i];
        if ( a[i] % 2 == 0 ) k++;
    }

    if ( k >= 2 ) {
        for ( ll i = 1; i <= n; i++ ) if ( a[i] % 2 != 0 ) cout << a[i];
    }

    else {
        for ( ll i = 1; i <= n; i++ ) if ( a[i] % 2 == 0 ) cout << a[i];
    }





	return 0;
}



