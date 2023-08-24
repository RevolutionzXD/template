#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll,ll>
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define ins insert
#define del erase

using namespace std;
const ll big = 1e6 + 9;
const ll inf = 1e15;

ll a, b;
bool p ( ll n ) { if (n<2) return 0; for ( ll i = 2; i <= sqrt(n); i++ ) if ( n % i == 0 ) return 0; return 1; }
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	while ( cin >> a >> b ) {
	    if (b == 0){cout << "-1\n"; continue;}
	    if (a % b == 0){cout << "YES\n"; continue;}
	    cout << "NO\n";
	}
	return 0;
}
