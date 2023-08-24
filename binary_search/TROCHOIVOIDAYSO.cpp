#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<long long> a, b;
    long long temp;
    for (long long i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }
    for (long long i = 0; i < n; i++) {
        cin >> temp;
        b.push_back(temp);
    }
    sort(all(a));
    sort(all(b));
    long long min1 = 1e10;
    long long i = 0;
    long long j = n - 1;
    while (i < n && j >= 0) {
        temp = a[i] + b[j];
        min1 = min(min1, abs(temp));
        if (temp >= 0) --j;
        if (temp < 0) ++i;
    }
    cout << min1;
}
