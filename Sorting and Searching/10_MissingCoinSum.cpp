#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int n;
	cin >> n;
	vector<int> coins(n);
	for(int i=0; i<n; i++){
		cin >> coins[i];
	}
	sort(coins.begin(), coins.end());
	int sum = 1;
	for(int i=0; i<n; i++){
		if(coins[i] > sum){
			cout << sum <<endl;
			return;
		}
		sum += coins[i];
	}
	cout << sum <<endl;
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