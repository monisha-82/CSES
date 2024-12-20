#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int n;
	cin >> n;
	vector<int> songs(n);
	for(int i=0; i<n; i++){
		cin >> songs[i];
	}
	map<int,int> mp;
	int ans = 0, i=0, j=0;
	while(j<n){
		if(mp.find(songs[j]) == mp.end()){
			mp.insert({songs[j], j});
		}
		else{
			if(mp[songs[j]] >= i){
				i = mp[songs[j]]+1;
			}
			mp[songs[j]] = j;
		}
		ans = max(ans, j-i+1);
		j++;
	}
	
	cout << ans << endl;
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