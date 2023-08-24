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


const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

char x[MAXN], y[MAXN];

int k2[4] = { 6, 2, 4, 8 };
int k3[4] = { 1, 3, 9, 7 };
int k4[4] = { 6, 4, 6, 4 };
int k7[4] = { 1, 7, 9, 3 };
int k8[4] = { 6, 8, 4, 2 };
int k9[4] = { 1, 9, 1, 9 };

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

	cin >> x >> y;
	int a = x[ strlen(x) - 1 ] - '0';
	
	if ( a == 1 || a == 5 || a == 6 || a == 0 ){
		cout << a;
		return 0;
	}
	
	int b;
	if( strlen(y) == 1 ) b = y[0] - '0';
	else b = ( y[ strlen(y) - 2 ] - '0' ) * 10 + ( y[ strlen(y) - 1 ] - '0' );
	b %= 4;
	if( a == 2 ) cout << k2[b];
	else if( a == 3 ) cout << k3[b];
	else if( a == 4 ) cout << k4[b];
	else if( a == 7 ) cout << k7[b];
	else if( a == 8 ) cout << k8[b];
	else if( a == 9 ) cout << k9[b];
	
	return 0;
	
}


