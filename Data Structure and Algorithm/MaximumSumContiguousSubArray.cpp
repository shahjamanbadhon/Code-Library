#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];

	int maxSum = 0;
	int cSum = 0;
	for(int i = 0; i < n; ++i){
	    cSum += a[i];
	    maxSum = max(maxSum,cSum);
	    if(cSum < 0) cSum = 0;
	}
	cout << maxSum << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
}

