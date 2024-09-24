#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> movieTime;
	int a,b;
	while(n--){
		cin >> a >> b;
		movieTime.push_back({b,a});
	}
	sort(movieTime.begin(), movieTime.end());
	
	int ans=0, end=0;
	for(auto it: movieTime){
		if(it.second >= end){
			ans++;
			end = it.first;
		}
	}
	cout<< ans <<endl;
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