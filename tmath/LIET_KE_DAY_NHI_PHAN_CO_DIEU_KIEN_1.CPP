// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

int a[MAXN];


void nhiphan ( ll n ) {
    ++a[n];
    for ( ll i = n; i > 1; --i ) {
        if ( a[i] > 1 ) {
            ++a[i - 1];
            a[i] -= 2;
        }
    }
}


void xuat ( ll n ) {
    for ( ll i = 1; i <= n; i++ ) {
        if ( a[i] == 0 && a[i + 1] == 1 ) return;
    }
    for ( ll i = 1; i <= n; i++ )
    cout << a[i];
    cout << endl;
}



int main () {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



     ll n;
     cin >> n;

     for ( ll i = 1; i <= n; i++ ) a[i] = 0;

     for ( ll i = 1; i <= pow( 2, n ); i++ ) {
        xuat (n);
        nhiphan (n);
     }



	return 0;
}




