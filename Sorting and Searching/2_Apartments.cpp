#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int applicants, apartments, diff;
	cin >> applicants >> apartments >> diff;
	vector<int> desiredSize(applicants);
	for(int i=0; i<applicants; i++){
		cin >> desiredSize[i];
	}
	vector<int> apartmentSize(apartments);
	for(int i=0; i<apartments; i++){
		cin >> apartmentSize[i];
	}
	
	sort(desiredSize.begin(), desiredSize.end());
	sort(apartmentSize.begin(), apartmentSize.end());
	
	int i=0,j=0, ans =0;
	while(i<applicants && j<apartments){
		if(abs(desiredSize[i] - apartmentSize[j]) <= diff){
			ans++;
			i++;
			j++;
		}
		else if(desiredSize[i] < apartmentSize[j]){
			i++;
		}
		else{
			j++;
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