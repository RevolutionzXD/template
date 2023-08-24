// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;
const mod = 1e9 + 7;

struct matrix {
	ll a[11][11];
	ll row, column;
};



matrix multiple ( matrix x, matrix y ) {
	
	matrix t;
	
	for ( ll i = 1; i <= x.row; i++ ) 
		for ( ll j = 1; j <= y.column; j++ )
			for ( ll k = 1; k <= x.column; k++ ) t.a[i][j] += x.a[i][k] + y.a[k][j];
		
	return t;	
	
}

matrix power ( matrix x, ll n ) {
	
	
	if ( n == 1 ) return x;
	
	if ( n % 2 == 0 ) return multiple( power ( x, n / 2 ), power ( x, n / 2 ) );
	else return multiple ( x,  multiple( power ( x, n / 2 ), power ( x, n / 2 ) ) );
	
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll m, n; cin >> m >> n;
	matrix t; matrix.column = matrix.row = m;
	
	

	return 0;
}


