// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


string s, t;
ll count1;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> s >> t;

    if ( s.size() < 2 && s[0] != t[0]) {
        cout << "No";
        return 0;
    }

    if ( s.size() < 2 && s[0] == t[0] ) {
        cout << "Yes";
        return 0;
    }

	for ( ll i = 0; i <= s.size() - 1; i++ ) {

        if ( s[i] != t[i] ) count1++;
        if ( count1 > 2 ) {
            cout << "No";
            return 0;
        }
	}

	cout << "Yes";

	return 0;
}



