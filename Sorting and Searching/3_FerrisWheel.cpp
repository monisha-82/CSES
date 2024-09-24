#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int noOfChildren, maxWeight;
	cin >> noOfChildren >> maxWeight;
	vector<int> weight(noOfChildren);
	for(int i=0; i<noOfChildren; i++){
		cin >> weight[i];
	}
	
	int ans = 0;
	
	sort(weight.begin(), weight.end());
	
	int i=0, j= noOfChildren-1;
	while(i<=j){
		if(weight[i] + weight[j] <= maxWeight){
			i++;
			j--;
			ans++;
		}
		else{
			ans++;
			j--;
		}
	}
	cout<<ans<<endl;
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