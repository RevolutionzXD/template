// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 2500;


string s, t;
ll a[ MAXN + 5 ][ MAXN + 5 ];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

	ll m, n;

	cin >> m >> n;

	cin >> s;
	cin >> t;

	s = " " + s;
	t = " " + t;

	memset ( a, 0, sizeof(a) );
	for ( ll i = 1; i <= m; i++ )
        for ( ll j = 1; j <= n; j++ )
            if ( s[i] == t[j] )
                a[i][j] = a[ i - 1 ][ j - 1 ] + 1;
            else a[i][j] = max ( a[ i - 1 ][j], a[i][ j - 1 ]);

    cout << a[m][n];




	return 0;
}



