#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int n, e;
	cin >> n;
	vector<int> store;
	for(int i=0; i<n; i++){
		cin >> e;
		auto it = upper_bound(store.begin(), store.end(), e);
		if(it == store.end()){
			store.push_back(e);
		}
		else{
			*it = e;
		}
	}

	cout << store.size() << endl;
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