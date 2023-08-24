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


const ll MAXN = 2e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN], f[MAXN];
ll n, res;

unordered_map<ll, ll> m;
unordered_set<ll> s;

//-----------------------//


void sub1 () {
	
	for ( ll i = 1; i <= n - 1; ++i ) {
			
		for ( ll j = i; j <= n; ++j ) {
				
			if ( f[j] - f[ i - 1 ] == 0 ) res++;
				
		}
			
	}
	
	cout << res;
	
}

void sub2(){
	sort(f + 1, f + n + 1);
	for (int i = 1; i <= n; i++)
		{m[f[i]]++; s.insert(f[i]);}
	res += m[0];
	for (auto i : s)
		res += m[i] * (m[i] - 1) / 2;
	cout << res;
}

signed main() {
	faster
   	freopen ("BAI1.INP","r", stdin);
	freopen ("BAI1.OUT","w", stdout);
	
	cin >> n; 
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	
	
	f[0] = 0;
	f[1] = a[1];
	for ( ll i = 2; i <= n; ++i ) f[i] = f[ i - 1 ] + a[i];
	
	

	sub2();
	
		


	return 0;
}


