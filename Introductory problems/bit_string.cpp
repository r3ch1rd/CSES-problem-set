#include <bits/stdc++.h>
#include <math.h>
typedef long long ll;
using namespace std;

int main(){
	ll n,res=1;
	cin >> n;
	if (n<=30){
		for (ll i=0;i<n;i++)
			res = res*2;
		cout << res;
	}else{
		res = 73741817;
		for (ll i=0;i<(n-30);i++){
			res = (res*2)%1000000007;
		}
		cout << res;
	}
}
