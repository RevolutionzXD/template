#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, q;
    cin >> n >> q;
    int a[n + 7], b[q + 7], l, r, res;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1 , a + n + 1);
    for(int i = 1; i <= q; i++){
        cin >> b[i];
    }
    for(int i = 1; i <= q; i++){
        l = 1; r = n;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[mid] < b[i]){
                res = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout << res << endl;
        res = 0;
    }
     return 0;
}

