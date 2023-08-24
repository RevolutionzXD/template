// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;

ll a[MAXN];
ll n, x, res;




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

	cin >> n >> x;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];
	
	sort( a + 1, a + n + 1 );
	
	ll i = 1, j = n;
	while ( i < j ) {
		
		if ( a[i] + a[j] == x ) res++;
		
		if ( a[i] + a[j] < x ) i += 1;
		else j -= 1;
	}
	
	cout << res;
	
	
	return 0;
}


