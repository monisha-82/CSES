#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int n;
	cin >> n;
	vector<int> nums(n);
	vector<int> index(n+1);
	for(int i=0; i<n; i++){
		cin >> nums[i];
		index[nums[i]] = i;
	}
	
	int round = 1;
	for(int i=1; i<n; i++){
		if(index[i] > index[i+1]){
			round++;
		}
	}
	cout << round <<endl;
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