// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 15;


ll a[MAXN], b[MAXN];

ll n, res = 100000000;

void Tinh() {
    ll chuong1 = 0, chuong2 = 0, ngoai = 0;
    for ( ll k = 1; k <= n; k++ ) {
        if ( b[k] == 1 ) chuong1 += a[k];
        if ( b[k] == 2 ) chuong2 += a[k];
        if ( b[k] == 0 ) ngoai++;

        //cout << "(" << n - k << ")" ;
    }
    if ( chuong1 == chuong2 ) {
        res = min ( res, ngoai );
           //cout << "(" << ngoai << ")" ;
    }

}

void Try ( ll i ) {
    for ( ll j = 0; j <= 2; j++ ) {
        b[i] = j;
        if ( i == n ) Tinh();
        else Try ( i + 1 );
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    Try (1);

    cout << res;

	return 0;
}



