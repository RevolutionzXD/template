// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;


ll a[MAXN], pre[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, k; cin >> n >> k;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	pre[0] = 0, pre[1] = a[1];
	for ( ll i = 2; i <= n; i++ ) {
        pre[i] = pre[ i - 1 ] + a[i];
	}

	ll res = 0;

	for ( ll i = 1; i <= n; i++)
    for ( ll j = i; j <= n; j++ ) if ( pre[j] - pre[ i - 1 ] == k ) res++;

    cout << res;



	return 0;
}



