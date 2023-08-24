#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s, t;


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll res, i = 1;

    getline(cin, s);
    getline(cin, t);

    while((s[i] - '0') < (t[i] - '0') && res <= s.size()){
        s.push_back(s[1]); s.erase(s[1]);
        t.push_back(t[1]); t.erase(t[1]);

    }
    if(res <= s.size()) cout << res;
    else cout << -1;

	return 0;
}


