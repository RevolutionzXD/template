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


const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;
const ll ALPHA = 26;


//---------Value---------//



//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n;
    string s;
    cin >> n >> s;

    ll sol_cnt = ALPHA, sol_l = -1, sol_r = -1;

    vector<ll> last( ALPHA, -1 ), sorted( ALPHA + 1, -1 );
    for ( ll i = 0; i < n; ++i ) {
        ll c = s[i] - 'a';
        sorted.erase( find( sorted.begin(), sorted.end(), last[c] ) );
        last[c] = i;
        sorted.insert( sorted.begin(), i );

        for ( ll j = 1; j <= ALPHA; ++j )
            if ( j * (sol_r - sol_l + 1 ) < sol_cnt * ( i - sorted[j] ) ) {
                sol_cnt = j;
                sol_l = sorted[j] + 1;
                sol_r = i;
            }
    }

    cout << sol_l + 1 << " " << sol_r + 1 << endl;
	

	return 0;
}


