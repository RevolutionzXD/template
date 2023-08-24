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



//-----------------------//



int n;

int cha[400005][22];
int h[400005];
float ans[400005];
vector <int> a[400005];
void dq(int s){

	for (int i : a[s])
		if (cha[s][0] != i){
			cha[i][0] = s;
			h[i] = h[s] + 1;
			dq(i);
	}
	
}


void pre(){

	for (int i = 1 ; i < 22 ; i ++ ){
		for (int j = 1 ; j <= n ;j ++ ){
			cha[j][i] = cha[cha[j][i - 1]][ i - 1];
		}
	}
	
			
}

int LCA(int u , int v){
	if (h[u] < h[v]){
		swap(u , v);
	}
	
	int k = h[u] - h[v];
	
	for (int i = 0 ; (1 << i) <= k ; i ++ )
		if (k >> i & 1) {// => 2^i +... = k
			u = cha[u][i];
	}

	
	int m = log2(h[u]);
	
	if (v != u){
	for (int i = m ; i >= 0 ; i -- )
		if (cha[u][i] != cha[v][i]){
			u = cha[u][i];
			v = cha[v][i];
		}
	
	return cha[u][0];
	}
	else
	return v;
		
}

void dqdq(int s){
	for (int i : a[s])
		if (cha[i][0] == s){
			dqdq(i);
			ans[s] += ans[i];
		}
}


ll const mod = 1e9 + 7;

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0) ; cout.tie(0);

//	freopen(task".inp" , "r" , stdin);
//	freopen(task".out" , "w" , stdout);

	cin >> n;
	
	for (int i = 1 ; i <= n - 1 ; i ++ ){
		int x , y;
		cin >> x >> y;
		
		a[x] . push_back(y);
		a[y] . push_back(x);
	}
	

	dq(1);	
	pre();

	
	for (int i = 1 ; i < n ; i ++ ){
		int m = LCA(i , i + 1);
		
		ans[i] ++;
		ans[i + 1] ++;
		
		ans[m] --;
		ans[cha[m][0]] --;
	}
	
	
		dqdq(1);
		
		
	for (int i = 1 ; i <= n ; i ++ )
		cout << ans[i] <<endl;
	

	return 0;
}

