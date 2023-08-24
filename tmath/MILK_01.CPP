// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 15;


ll a[MAXN], b[MAXN];

ll n, res = 10000000;

void Tinh() {
    ll con1 = 0, con2 = 0;
    for ( ll k = 1; k <= n; k++ ) {
        if ( b[k] == 0 ) con1 += a[k];
        else con2 += a[k];
    }

    res = min ( res, abs ( con1 - con2 ));
}

void Try ( ll i ) {
    for ( ll j = 0; j <= 1; j++ ) {
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

