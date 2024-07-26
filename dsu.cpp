// Nguyen Thien Nhan (tomato)
#include <bits/stdc++.h>
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,popcnt")

using namespace std;

#define TASK "A"
#define ll long long
#define fi first
#define se second
#define inf 1e9
#define BIT(x, i) (((x) >> (i)) & (1LL))
#define MASK(i) ((1LL) << (i))
#define ii pair<int, int>

template<class T> bool maximize(T &a, const T &b) {
    return a < b ? a = b, 1 : 0;
}

template<class T> bool minimize(T &a, const T &b) {
    return a > b ? a = b, 1 : 0;
}

const int MAXN = 5e5 + 5;
const int MAXM = 2e5 + 5;
const int MOD = 1e9 + 7;

struct Edge {
    int u, v, w, id; 
};

//---------Value---------//

int test;
int numVer, numEdge;
int par[MAXN], sz[MAXN];
vector<Edge> edge;
vector<Edge> mst;
int dis;


//-----------------------//


void make_set() {
    for (int i = 1; i <= numVer; ++i) {
        par[i] = i;
        sz[i] = 1;
    }
}

int find_set(int u) {
    if (u == par[u]) return u;
    return par[u] = find_set(par[u]);
}

bool unite(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a == b) return false;
    if (sz[a] < sz[b]) swap(a, b);
    par[b] = a;
    sz[a] += b;
    return true;
}

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

void kruskal() {
    sort(edge.begin(), edge.end(), cmp);
    for (Edge t : edge) {
        if (mst.size() == numVer - 1) break;
        if (unite(t.u, t.v)) {
            mst.push_back(t);
            dis += t.w;
        }
    }
}


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    freopen(TASK".INP", "r", stdin);
    freopen(TASK".OUT", "w", stdout);
    cin >> test;
    cin >> numVer >> numEdge;
    int cnt = 1;
    for (int i = 1; i <= numEdge; ++i) {
        int x, y, z; cin >> x >> y >> z;
        edge.push_back({x, y, z, cnt++});
    }
    make_set();
    kruskal();
    for (Edge t : mst) cout << t.id << " ";

    return 0;

}








