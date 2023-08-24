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

long double a1, b1, a2, b2, res, tmp;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> a1 >> b1 >> a2 >> b2;
	tmp = (a1 * a2 + b1 * b2) / (sqrt(pow(a1, 2) + pow(b1, 2)) + sqrt(pow(a2, 2) + pow(b2, 2)));
	cout << fixed << setprecision(10);
	if (a1 * a2 + b1 * b2 == 0 ){
		cout << pi / 2;
		return 0;
	}
	res = asin(tmp);
	cout << fmod(res, pi);

	return 0;
	
}


