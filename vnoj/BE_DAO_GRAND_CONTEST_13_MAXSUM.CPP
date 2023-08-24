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


const ll MAXN = 1e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN], pre[MAXN];
ll n, minn1 = inf, minn2 = inf, res;


//-----------------------//



bool cmp( ll a, ll b ) {
	return a > b;
}


signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll tmp1, tmp2, tmp3, tmp4;

	
	cin >> n;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	pre[0] = 0;
	pre[1] = a[1];
	
	for ( ll i = 2; i <= n; ++i ) pre[i] = pre[ i - 1 ] + a[i];
	
	for ( ll i = 1; i <= n; ++i ) {
		
		for ( ll j = i; j <= n; ++j ) {
			
			if ( pre[j] - pre[ i - 1 ] < minn1 ) {
				
				tmp1 = i; tmp2 = j;
				minn1 =  pre[j] - pre[ i - 1 ];
				
			}
			
		}
		
	}
	
	
	for ( ll i = 1; i <= n; ++i ) {
		
		for ( ll j = i; j <= n; ++j ) {
			
			if ( pre[j] - pre[ i - 1 ] != minn1 && ( i > tmp2 || j < tmp1 ) ) {
				
				if ( pre[j] - pre[ i - 1 ] < minn2 ) {
					
					minn2 =  pre[j] - pre[ i - 1 ];
					tmp3 = i;
					tmp4 = j;
					
				}
				
			}

		}
		
	}
	
	/*
	for ( ll i = 1; i <= n; ++i ) {
		
		for ( ll j = i + 1; j <= n; ++j ) {
			
			if ( pre[j] - pre[ i - 1 ] == minn1 || pre[j] - pre[ i - 1 ] == minn2 ) {
				
				for ( ll k = i; k <= j; ++k ) a[k] = -a[k];
				
			}
			
		}
		
	}
	*/
	
	
	for ( ll i = tmp1; i <= tmp2; ++i ) a[i] = -a[i];
	for ( ll i = tmp3; i <= tmp4; ++i ) a[i] = -a[i];
	
	for ( ll i = 1; i <= n; ++i ) res += a[i];
	cout << res;
	

	//cout << " " << tmp1 << " " << tmp2 << " " << tmp3 << " " << tmp4;


 	
	

	return 0;
	
}


