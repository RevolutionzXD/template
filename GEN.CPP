// Nguyen Thien Nhan (tomato)
#include <bits/stdc++.h>
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,popcnt")

using namespace std;

#define TASK "A"
#define int long long
#define fi first
#define se second
#define BIT(x, i) (((x) >> (i)) & (1LL))
#define MASK(i) ((1LL) << (i))
#define ii pair<int, int>

template<class T> bool maximize(T &a, const T &b) {
    return a < b ? a = b, 1 : 0;
}
 
template<class T> bool minimize(T &a, const T &b) {
    return a > b ? a = b, 1 : 0;
}

const int MAXN = 25;
const int MAXM = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;


//---------Variable---------//

int numVer, numEdge, numBank;

//--------------------------//



int randInt(int l, int r) {
	int res = 0;
	for (int i = 0; i < 4; ++i) res = (res << 15) ^ (rand() & (MASK(15) - 1));
	return l + (res % (r - l + 1));
}



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    freopen(TASK".INP", "w", stdout);

    srand(time(NULL));

    numVer = 1e5;
    numEdge = 2e5;
    numBank = 18;
    cout << numVer << " " << numEdge << " " << numBank << '\n';
    for (int i = 1; i <= numBank; ++i) cout << i << " ";
    cout << '\n';
    for (int i = 1; i <= numEdge; ++i) {
        cout << randInt(1, numVer) << " " << randInt(1, numVer) << " " << randInt(1, 1e9) << '\n';
    }

     
 

    return 0;

}
