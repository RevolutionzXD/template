// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll a[MAXN], b[MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, k, dem = 0;

    cin >> n >> k;
    for ( ll i = 1; i <= n; i++ ) {
        cin >> a[i];
        b[a[i]]++;
    }

    for ( ll i = 1; i <= 1e6; i++ ) {
        if ( b[i] == k ) cout << i << " ";
        dem++;
    }

    if ( dem = 0 ) cout << -1;



	return 0;
}



