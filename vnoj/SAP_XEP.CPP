// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;




//---------Value---------//

ll a[MAXN];
unordered_map<ll, ll> m;
ll n;

//-----------------------//


bool cmp ( ll a, ll b ){
	return m[a] > m[b] || ( m[a] == m[b] && a < b );
}



signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	for ( ll i = 1; i <= n; ++i ) m[a[i]]++;
	
	sort( a + 1, a + n + 1, cmp );
	
	for ( ll i = 1; i <= n; ++i ) cout << a[i] << " ";

	return 0;
	
}


