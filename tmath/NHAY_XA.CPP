// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


ll moc[MAXN], theluc[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, m;

	cin >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> moc[i];

	sort ( moc + 1, moc + n + 1 );

	cin >> m;
	for ( ll i = 1; i <= m; i++ ) cin >> theluc[i];

	for ( ll i = 1; i <= m; i++ ) {
        ll k = upper_bound ( moc + 1, moc + n + 1, theluc[i] ) - moc - 1;
        cout << k << '\n';
	}

	return 0;
}



