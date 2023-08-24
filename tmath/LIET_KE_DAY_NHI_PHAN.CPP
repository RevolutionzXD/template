// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll a[MAXN];
ll n;

void print() {

    for ( ll i = 1; i <= n; i++ ) cout << a[i];
    cout << endl;

}

void Try ( ll i ) {
    for ( ll j = 0; j <= 1; j++ ) {

        a[i] = j;

        if ( i == n ) print();

        else Try (i + 1);
    }
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    Try(1);

	return 0;
}




