#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int n;
	cin >> n;
	vector<int> sticks(n);
	for(int i=0; i<n; i++){
		cin >> sticks[i];
	}
	sort(sticks.begin(), sticks.end());
	int mid = sticks[n/2];
	int ans = 0;
	for(int i=0; i<n; i++){
		ans += abs(mid - sticks[i]);
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