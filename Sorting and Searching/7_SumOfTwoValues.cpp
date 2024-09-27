#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int n;
	cin >> n;
	int sum;
	cin >> sum;
	vector<pair<int,int>> nums;
	for(int i=0; i<n; i++){
		int element;
		cin >> element;
		nums.push_back({element, i+1});
	}
	
	sort(nums.begin(), nums.end());
	int i = 0, j = n-1;
	while(i<j){
		int currentSum = nums[i].first + nums[j].first;
		if(currentSum == sum){
			cout << nums[i].second << " " << nums[j].second << endl;
			return;
		}
		else if(currentSum < sum){
			i++;
		}
		else{
			j--;
		}
	}
	cout << "IMPOSSIBLE" << endl;
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