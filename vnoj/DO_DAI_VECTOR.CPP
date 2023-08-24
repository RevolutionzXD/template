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

double a, b, c, d, res;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> a >> b >> c >> d;
	res = sqrt(pow(a - c, 2) + pow(b - d, 2));
	cout << fixed << setprecision(10);
	cout << res;

	return 0;
	
}


