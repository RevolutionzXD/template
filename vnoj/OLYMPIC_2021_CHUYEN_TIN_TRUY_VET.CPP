// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll dd[1001]= {0};
ll f1, f2;

//-----------------------//

ll dis( ll a[], ll b[] ){
    return sqrt( pow( b[0] - a[0], 2 ) + pow( b[1] - a[1], 2 ) );
}


void solve(ll a[][2], ll n, ll d, ll f0)
{
    for( ll i = 1; i <= n; ++i )
    {
        if( dd[i] == 0 && dis( a[f0], a[i]) < d){
            f1++;
            dd[i] = 1;
        }
    }
    
    for( ll i = 1; i<= n; ++i ){
        if( dd[i] == 1) for( ll j = 1; j <= n; ++j ){
        	
            if( dd[j] == 0 && dis( a[i], a[j]) < d ) {
                f2++;
                dd[j] = 3;
            }
        }
    }
}




signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n, f0, d;
    cin >> n >> f0 >> d;
    ll a[ n + 1 ][2];
    for( ll i = 1; i <= n; ++i ) cin >> a[i][0] >> a[i][1];
    dd[f0] = 2;
    
    solve( a, n, d, f0 );
    cout << f1 << " " << f2;
	

	return 0;
}


