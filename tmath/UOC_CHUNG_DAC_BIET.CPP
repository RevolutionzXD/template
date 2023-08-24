// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

vector <ll> v;


ll tongchuso ( ll x ) {

    ll res = 0;

    while ( x > 0 ) {

        res += x % 10;
        x /= 10;

    }

    return res;
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll a, b, res = 0; cin >> a >> b;

	for ( ll i = 1; i <= min( a, b ); i++ ) {
        if ( a % i == 0 && b % i == 0 ) v.push_back(i);
 	}

 	for ( auto i : v ) {
        res = max ( res, tongchuso(i) );
 	}

 	cout << res;


	return 0;
}



