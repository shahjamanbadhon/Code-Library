#include<bits/stdc++.h>
using namespace std;


void solve(){
	pair<int,string> p;
	p = make_pair(2,"Badhon");
	p = {3,"abc"};
	pair<int,string> &p1 = p;
	p1.first = 12;
	cout << p.first << " " << p.second << endl;
	int a[] = {1,2,3};
	int b[] = {2,3,4};

	pair<int,int> pair_array[3];
	pair_array[0] = {1,2};
	pair_array[1] = {2,3};
	pair_array[2] = {3,4};

	for(int i= 0; i <3; ++i){
		cout << pair_array[i].first << " " << pair_array[i].second << endl;
	}

	cout << "\n\n\n";
	swap(pair_array[0],pair_array[2]);

	for(int i= 0; i <3; ++i){
		cout << pair_array[i].first << " " << pair_array[i].second << endl;
	}



	pair<int,int>s;
	cin >> s.first;
	cout << s.first;
}

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
}
