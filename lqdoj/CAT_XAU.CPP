// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

string s;
set < char > se;



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll res = 0;

	cin >> s;

	for ( ll i = 0; i < s.size(); i++ ) {

        if ( se.find( s[i] ) == se.end() ) se.insert( s[i] );

        else {
            se.erase( se.begin(), se.end() );
            se.insert( s[i] );
            res++;
        }
	}


	cout << res + 1;

	return 0;
}



