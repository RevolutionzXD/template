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

ll n; 
ll a[MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n; 
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	ll res = 0;
	sort( a + 1, a + n + 1 );
	
	for ( ll i = 1; i < n; ++i ){
		res += a[i + 1] - a[i];
	} 
	
	cout << res;
	

	return 0;
}


