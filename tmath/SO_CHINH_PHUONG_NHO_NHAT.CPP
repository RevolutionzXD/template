// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

bool cp( ll x ) {
    ll k = sqrt(x);
    if ( k * k == x ) return true;
    else return false;

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n; cin >> n;

	ll i = n + 1;
	while ( i > n ) {

        if ( cp(i) ) {
            cout << i;
            return 0;
        }

        i++;
	}

	return 0;
}


