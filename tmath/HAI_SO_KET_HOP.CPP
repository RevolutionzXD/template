// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

string a, b, c;




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll i = 1, j = 1;

    cin >> a >> b;

    a = " " + a;
    b = " " + b;

    while ( i <= a.size() || j <= b.size() ) {

        if ( j == b.size() + 1 || i < a.size() && ( a[i] - '0' + 1 ) <= b[j] - '0' + 1 )
            c.push_back ( a[i++] );
        else
            c.push_back ( b[j++] );
    }

    for ( auto it : c )
        cout << it;




	return 0;
}



