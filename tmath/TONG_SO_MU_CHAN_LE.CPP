#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 8;

map <ll, ll> a;
set <ll> b;


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, p = 0, s = 0;

	cin >> n;

	for ( ll i = 2; i * i <= n; i++ ) {
        if ( n % i == 0 ) {
            while ( n % i == 0 ) {
                a[i]++;
                n /= i;
                b.insert(i);
            }
        }
	}

	if ( n != 1 ) {
        b.insert(n);
        a[n]++;
	}

	for ( auto i : b ) if ( a[i] % 2 == 0 ) s += a[i];
	else p += a[i];

    cout << s << '\n' << p;

}




