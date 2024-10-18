#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int prev = arr[0], ans = 0;
	for(int i=1; i<n; i++){
		if(prev > arr[i]){
			ans += prev - arr[i];
		}
		else{
			prev = arr[i];
		}
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