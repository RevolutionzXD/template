// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


vector <ll> v;
ll a[MAXN];

bool cp ( ll x ) {

    if ( x == 0 ) return false;

    ll y = sqrt (x);

    if ( pow ( y, 2 ) != x ) return false;
    else return true;

}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n; cin >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	for ( ll i = 1; i <= n; i++ ) {

        if ( cp (a[i]) ) v.push_back (a[i]);

	}

	cout << *max_element ( v. begin(), v.end() );


	return 0;
}



