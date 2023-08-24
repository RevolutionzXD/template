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


//---------Value---------//

ll n, res;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	
	
	ll ad = 0, bd = 0;
	
	if ( n % 7 >= 2 ) ad = 2;
	else ad = n % 7;
	
	if ( n % 7 - 5 > 0 ) bd = n % 7 - 5;
	else bd = 0;
	
	
	

    
    cout << ( n / 7 ) * 2 + bd << " " << ( n / 7 ) * 2 + ad;
    
    return 0;

}


