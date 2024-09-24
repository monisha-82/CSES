#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> time;
	while(n--){
		int a,b;
		cin>>a>>b;
		time.push_back({a,1});
		time.push_back({b,-1});
	}
	
	sort(time.begin(), time.end());
	
	int i = 0, c = 0, ans = 0;
	while(i < time.size()){
		c += time[i].second;
		ans = max(c,ans);
		i++;
	}
	cout<<ans<<endl;
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