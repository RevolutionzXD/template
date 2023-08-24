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
#define pi M_PI
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

long double a1, a2, b1, b2, c1, c2, x, y;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	y = (a2 * c1 - a1 * c2) / (a1 * b2 - a2 * b1);
	x = (-c1 - b1 * y) / a1;
	cout << fixed << setprecision(6) << x << " " << y;

	return 0;
	
}


