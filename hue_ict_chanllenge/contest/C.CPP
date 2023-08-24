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


void dem(ll trick[], ll n)
{

    vector<ll> s = {0};
         
        for ( ll i = 0; i < n; ++i ) {
            const ll v = s.size();
            for ( ll t = 0; t < v; ++t ) {
                s.push_back( s[t] + trick[i] );
            }
        }

          for( ll i = 1; i<s.size() ; ++i )
        cout << s[i] << " ";
}




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	ll n; cin >> n;
	for ( ll i = 0; i < n; ++i ) cin >> a[i];
	
	dem( a, n );

	return 0;
}


