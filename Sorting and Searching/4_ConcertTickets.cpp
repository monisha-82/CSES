#include <bits/stdc++.h>
#define int long long
#define INF 1e18
#define setbits(x) __builtin_popcount(x)
using namespace std;
const int mod = 998244353;

void solve(){
	int tickets, customers;
	cin >> tickets >> customers;
	vector<int> priceOfTicket(tickets);
	vector<int> priceByCustomer(customers);
	for(int i=0; i< tickets; i++){
		cin >> priceOfTicket[i];
	}
	for(int i=0; i<customers; i++){
		cin >> priceByCustomer[i];
	}
	
	multiset<int> maxPrice;
	
	for (int i = 0 ; i < priceOfTicket.size() ; i++){
        maxPrice.insert(priceOfTicket[i]);
    }
    
    vector<int> ans(priceByCustomer.size());
    
    for (int i = 0 ; i < priceByCustomer.size() ; i++){
        int temp = priceByCustomer[i];
        multiset<int>::iterator itr = maxPrice.upper_bound(temp);
        if (itr == maxPrice.begin()){
            ans[i] = -1;
        }
        else{
            itr--;
            ans[i] = (*itr);
            maxPrice.erase(itr);
        }
    }
    for (int i : ans) {
        cout << i << endl;
    }
    cout << endl;
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