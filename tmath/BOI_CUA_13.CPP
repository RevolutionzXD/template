// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


ll a[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll l, r, res = 0;

    cin >> l >> r;


    memset ( a, true, sizeof(a) );
    for ( ll i = 13; i <= MAXN; i += 13 ) a[i] = false;

    for ( ll i = l; i <= r; i++ ) if ( a[i] ) res += i;

    cout << res;

	return 0;
}



