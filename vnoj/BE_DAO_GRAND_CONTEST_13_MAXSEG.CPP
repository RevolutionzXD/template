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


const ll MAXN = 1e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll n;
ll a[MAXN], p[MAXN], dp[MAXN];

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	for ( ll i = 1; i <= n; ++i ) cin >> p[i];
	
	
	
	
	if (n<=5000){
		for (int i=1;i<=n;i++){
			int l=1,r=1;
			long long res=-1e9;
			while (r<=n){
				while (a[l]==1)
					l++;
				if (l<=r && a[r+1]==1){

					for (int x=l;x<=r;x++){
						for (int y=x;y<=r;y++){
							res=max(res,dp[y]-dp[x-1]);
						}
					}
					l=r+1;
				}
				r++;
			}
			cout<<res<<endl;
			a[p[i]]=1;

		}
	}
	

	return 0;
	
}


