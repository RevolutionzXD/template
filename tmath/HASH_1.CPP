// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;



string s;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll mod, hash1 = 0;

	cin >> mod;
	cin >> s;

	for ( ll i = 0; i < s.size(); i++ ) {
        hash1 = ( hash1 * 31 + ( s[i] - 'a' + 1 ) ) % mod;
	}

	cout << hash1 % mod;



	return 0;
}



