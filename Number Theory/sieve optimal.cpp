#include<bits/stdc++.h>
using namespace std;
const long long MAX = 1e7+10;
long long nPrimes;
long long primes[MAX];
bool mark[MAX];

void sieve(long long n){

    long long i,j,limit = sqrt(n*1.)+2;
    mark[1] = true;

    for (long long i = 4; i <= n; i+=2){
        mark[i] = true;
    }
    primes[nPrimes++] = 2;

    for ( i = 3; i <= n; i += 2){
        if(!mark[i]){
            primes[nPrimes++] = i;
            if(i <= limit){
                for( j = i*i; j <= n; j += i*2){
                    mark[j] = true;
                }
            }
        }
    }
}


int main(){
    int n = 100;
    sieve(n);
    for(int i = 1; i <= n; ++i){
        if(mark[i] == false) cout << i <<'\n';
    }

}
