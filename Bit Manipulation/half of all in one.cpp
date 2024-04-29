#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i = 10; i >= 0; --i){
    	cout << ((num>>i)&1);
    }
    cout <<endl;
}
void testset_bit(int a){
	if(a&(1<<2)) cout << "Yes\n";
	else cout << "NO\n";
}

void unset_bit(int a){
	printBinary(a&(~(1<<3)));
}
void set_bit(int a){
	printBinary(a|(1<<3));
}
void evenOdd(int a){
	if(a&1) cout << "Odd\n";
	else cout << "Even\n";
}
void devideMultipleByTwo(int a){
	cout << "Devide By Two:\n";
	cout << (a>>1) << '\n';
	cout << "Multiple By Two:\n";
	cout << (a<<1) << '\n';
}

void solve(){
	int a;
	cin >> a;
    printBinary(a);
    testset_bit(a);
    unset_bit(a);
    set_bit(a);
    evenOdd(a);
    devideMultipleByTwo(a);

}

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
}
