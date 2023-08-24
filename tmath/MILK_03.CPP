// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 20;


ll a[MAXN], b[MAXN];

ll n, res;

void print () {
    for ( ll i = 1; i <= n; i++ ) cout << b[i];
    cout << '\n';
    res++;
}

void Tinh() {
  ll may1 = 0, may2 = 0;

  for ( ll k = 1; k <= n; k++ ) {
    if ( b[k] == 1 ) may1 += a[k];
    else may2 += a[k];
  }

  if ( may1 == may2 ) print();


}

void Try ( ll i ) {
    for ( ll j = 1; j <= 2; j++ ) {
        b[i] = j;
        if ( i == n ) Tinh();
        else Try ( i + 1 );
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    Try (1);

    if ( res == 0 ) cout << -1;

	return 0;
}




