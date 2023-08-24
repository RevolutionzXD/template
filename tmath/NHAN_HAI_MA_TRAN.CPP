// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e3 + 5;


ll a[MAXN][MAXN], b[MAXN][MAXN], c[MAXN][MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	for ( ll i = 1; i <= 2; i++ ) 
		for ( ll j = 1; j <= 2; j++ ) cin >> a[i][j];
		
	for ( ll i = 1; i <= 2; i++ ) 
		for ( ll j = 1; j <= 2; j++ ) cin >> b[i][j];
		
		
	
	for ( ll i = 1; i <= 2; i++ ) 
		for ( ll j = 1; j <= 2; j++ ){
		
			ll tmp = 0;
			for ( ll k = 1; k <= 2; k++ ) tmp += a[i][k] * b[k][j];
			c[i][j] = tmp;
	}
		

	
	for ( ll i = 1; i <= 2; i++ ) {
		
		for ( ll j = 1; j <= 2; j++ ) cout << c[i][j] << " ";
		cout << endl;
		
	}
	return 0;
}


