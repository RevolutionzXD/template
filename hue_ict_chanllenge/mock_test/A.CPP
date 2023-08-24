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


ll n, res3, res5, res15;

void solve() {
	
	cin >> n;
	
	ll a = n / 3, b = n / 5, c = n / 15;
	
	res3 = ( 3 * a * ( a + 1 ) ) / 2;
	res5 = ( 5 * b * ( b + 1 ) ) / 2;
	res15 = ( 15 * c * ( c + 1 ) ) / 2;
	
	cout << res3 + res5 - res15;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	solve();

	return 0;
}


