// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, res = 0;


    cin >> n;
    for ( ll i = 1; i <= n; i++ ) {

        string s;
        cin >> s;


        if ( s == "Tetrahedron" )
            res += 4;

        else if ( s == "Cube" )
            res += 6;

        else if ( s == "Octahedron" )
            res += 8;

        else if ( s == "Dodecahedron" )
            res += 12;

        else res += 20;



    }

    cout << res;

	return 0;
}



