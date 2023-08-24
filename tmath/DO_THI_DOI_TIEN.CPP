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


struct money {
	ll gold;
	ll silver;
	ll bronze;
};


ll n, res;
money dung, value;
money a[MAXN];



void input() {
		
	cin >> dung.gold >> dung.silver >> dung.bronze;
	cin >> value.gold >> value.silver >> value.bronze;
	
	cin >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i].gold >> a[i].silver >> a[i].bronze;
	
}


void solve() {
	
	


	
	
}





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	input();

	return 0;
}


