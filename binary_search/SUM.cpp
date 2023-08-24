#include <bits/stdc++.h>
using namespace std;
int n, t;
long long a[100005], b[100005];

bool check(int k){
    for(int i = k; i <= n; i++){
        if(b[i] - b[i - k] <= t)return true;
    }
    return false;
}

int main() {
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 cin >> n >> t;
 for(int i = 1; i <= n; i++){
    cin >> a[i];
    b[i] = b[i - 1] + a[i];
 }
 int l = 1, r = n;
 while(l <= r){
    int mid = (l + r) / 2;
    if(check(mid))l = mid + 1;
    else r = mid - 1;
 }
 cout << l - 1;
 return 0;
}







