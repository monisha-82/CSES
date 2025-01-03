#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	string s;
	cin >> s;
	int n = s.length(), i=1, ans = 1, count = 1;
	while(i<n){
		if(s[i]==s[i-1]){
			count++;
			ans = max(ans,count);
		}
		else{
			count = 1;
		}
		i++;
	}
	cout << ans <<endl;
	return;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    solve();
    return 0;
}