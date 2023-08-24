// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll a[25];
ll n, res;



bool check ( ll x ) {
    for ( ll i = 2; i * i <= x; i++ ) {
        if ( x % i == 0 ) return false;
    }

    return (x > 1); // chua hieu
}

void print () {
    ll dem0 = 0, dem1 = 0;
    for ( ll k = 1; k <= n; k++ ) {
        if ( a[k] == 0) dem0++;
        else dem1++;
    }
    if ( !check (dem1) || !check ( abs ( dem1 - dem0 ))) return;
    res++;

}

void Try ( ll i ) {
    for ( ll j = 0; j <= 1; j++ ) {
        a[i] = j;
        if ( i == n ) print();
        else Try ( i + 1 );
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    Try (1);
    cout << res;

	return 0;
}


