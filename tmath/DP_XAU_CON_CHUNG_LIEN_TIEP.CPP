// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;


string a, b;
ll f[5505][5505];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

	ll n, m, res = 0;

	cin >> a >> b;

	a = " " + a;
	b = " " + b;

	for ( ll i = 1; i < a.size(); i++ ) {
        for ( ll j = 1; j < b.size(); j++ ) {
            if ( a[i] == b[j] ) f[i][j] = f[ i - 1 ][ j - 1 ] + 1;
            else f[i][j] = 0;
            res = max ( res, f[i][j] );
        }
	}

    cout << res;

	return 0;
}



