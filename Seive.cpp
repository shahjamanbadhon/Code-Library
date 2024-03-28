#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool marked[M];

void sieve(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (marked[i] == false) { // i is a prime
      for (int j = i * i; j <= n; j += i) {
        marked[j] = true;
      }
    }
  }
}

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}

int main(){
    int n;
    cin >> n;
    sieve(n);
    if(isPrime(n)) cout << "YES\n";
    else cout << "No\n";

}
