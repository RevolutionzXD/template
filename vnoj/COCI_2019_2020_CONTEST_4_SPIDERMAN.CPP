// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



const ll MOD = 1e9 + 6;
const ll MAXN = 3e5 + 10;
const ll MAXH = 1e6 + 10;


//---------Value---------//

ll n, k;
ll h[MAXN], sol[MAXH];

map<ll, ll> cnt;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n >> k;
	for ( ll i = 0; i < n; ++i ) {
	    cin >> h[i];
	    cnt[h[i]]++;
	}
	
	for ( const auto &p : cnt ) {
		
		if ( p.first <= k ) continue;
	    for ( ll j = k; j < MAXH; j += p.first ) sol[j] += p.second;
	    if ( k == 0 ) sol[p.first]--;
	    
	}
	
	for ( ll i = 0; i < n; ++i ) cout << sol[h[i]] << " ";


	return 0;
}


