// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;


ll n;



ll path ( ll m, ll n ) {
	
	if ( m == 1 || n == 1 ) return 1;
	
	else return path ( m - 1, n ) + path ( m, n - 1 );
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	cout << path ( n, n );

	return 0;
}


