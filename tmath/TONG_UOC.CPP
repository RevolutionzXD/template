// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


ll tong_uoc ( ll x ) {
    ll res = 0;

    for ( ll i = 1; i * i <= x; i++ ) {

        if ( x % i == 0 && x / i != i ) res += x / i + i;

        if ( x % i == 0 && x / i == i ) res += i;

    }

    return res;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;

    cout << tong_uoc(n);



	return 0;
}



