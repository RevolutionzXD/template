// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll a[MAXN];
unordered_map <ll, ll> b;



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n;

	cin >> n;
	for ( ll i = 1; i <= n; i++ ) {
        cin >> a[i];
        b[a[i]]++;
	}

	for ( ll i = 1; i <= n; i++ ) {
        cout << a[i] << " " << b[a[i]] << '\n';
	}


	return 0;
}



