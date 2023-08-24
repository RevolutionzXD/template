// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 15;


ll a[MAXN], b[MAXN], c[MAXN], n, k, dem;

void print () {
    for ( ll i = 1; i <= k; i++ )  cout << c[a[i]] << " ";
    cout << endl;
    dem++;
}

void Try ( ll i ) {
    for ( ll j = 1; j <= n; j++ ) {
        if ( b[j] == 0 ) {

            a[i] = j;
            b[j] = 1;

            if ( i == k ) print();
            else Try ( i + 1);

            b[j] = 0;
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> k >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> c[i];

	sort ( c + 1, c + n + 1 );

	Try (1);

	cout << dem;

	return 0;
}
