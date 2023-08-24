// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

bool check ( ll x ) {

    if ( x == 0 || x == 1 ) return false;

    for ( ll i = 2; i * i <= x; i++ ) {
        if ( x % i == 0 ) return false;
    }

    return true;
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;

    if ( check (n) ) cout << "YES";
    else cout << "NO";

	return 0;
}


