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
    int findComplement(int num) {
        vector<long long> bit;
        long long res = 0;
        while(num > 0){
            bit.push_back(num % 2);
            num /= 2;
        }
        //reverse(bit.begin(), bit.end());
        long long base = 1;
        for(long long t = 0; t < bit.size(); ++t){
            long long tmp = 0;
            if (bit[t] == 0) tmp = 1;
            res += tmp * base;
            base *= 2;
        }
        return res;
    }
};


signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

	return 0;
	
}


