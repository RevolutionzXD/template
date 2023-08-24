#include <bits/stdc++.h>
#define TASK "BASE"
#define maxn 100001

using namespace std;

int n, m, h[maxn];
int64_t t[maxn];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    if (fopen(TASK".inp","r")) {
        freopen(TASK".inp","r",stdin);
        freopen(TASK".out","w",stdout);
    }
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) cin >> h[i];
    sort(h+1, h + n + 1);
    t[0] = 0;
    for(int i = 1; i <= n; ++i) t[i] = t [i-1] + h[i];
    while (m--) {
        int K; cin >> K;
        int i = upper_bound(h + 1, h + n + 1, K) - h;
        cout << int64_t(i - 1) * K - t[i - 1] + (t[n] - t[i - 1]) - int64_t(n + 1 - i) * K << '\n';
    }
}
