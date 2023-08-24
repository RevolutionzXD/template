// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

string s, a[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll x = 0;

    while ( cin >> s ) a[++x] = s;
    while ( x-- ) cout << a[x + 1] << " ";


	return 0;
}



