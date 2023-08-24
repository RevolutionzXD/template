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



//-----------------------//



class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k = 0, f = 0;
        k = celsius + 273.15;
        f = celsius * 1.80 + 32.00;
        return {k, f};
    }
};


signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

	return 0;
	
}


