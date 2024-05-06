#include<bits/stdc++.h>
using namespace std;

//v.size() --> O(1)

void printVector(vector<int> v){
	cout << "Size:" << v.size() << "\n";
	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}

	cout << '\n';
}

void printVectorRef(vector<int> &v){
	cout << "Size:" << v.size() << "\n";
	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}
	v.push_back(2);

	cout << '\n';
}


void solve(){
	vector<int>v;
	for(int i = 0; i < 10; ++i){
		int x;
		cin >> x;
		v.push_back(x); // O(1)
	}


	printVector(v);
	vector<int> c(10, 3);
	c.push_back(7);
	printVector(c);

	c.pop_back();  // O(1)
	printVector(c);

	vector<int>d = c;   //O(n)
	printVector(d);

	//by Ref

	cout << "Ref---------\n";

	vector<int>n;
	n.push_back(7);
	n.push_back(6);

	vector<int> f = n;
	f.push_back(5);
	printVectorRef(n);
	printVectorRef(n);
	printVectorRef(f);


	vector<int> &z = f;  // O(1)
	f.push_back(5);
	printVectorRef(f);
	printVectorRef(f);
	printVectorRef(z);

}

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
}
