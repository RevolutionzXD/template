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


const ll MAXN = 25;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll test;
ll col;
char v[MAXN][MAXN];

//-----------------------//



bool search(char a, ll b, ll d, ll e){
	for (ll i = b; i <= e; ++i){
		for (ll j = 1; j <= d; ++j){
			if (v[j][i] == a){
				col = i;
				return true;
			}
		}
	}
	return false;
}


signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> test;
	while(test--){
		ll n, m; cin >> n >> m;
		for (ll i = 1; i <= MAXN; ++i)
			for (ll j = 1; j <= MAXN; ++j) v[i][j] = '#';
		for (ll i = 1; i <= m; ++i)
			for (ll j = 1; j <= n; ++j) cin >> v[i][j];
		if(search('v', 1, n, m)){
			if(search('i', col + 1, n, m)){
				if(search('k', col + 1, n, m)){
					if(search('a', col + 1, n, m)){
						cout << "YES" << endl;
					}
					else cout << "NO" << endl;
				}
				else cout << "NO" << endl;
			}
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
	}

	return 0;
	
}


