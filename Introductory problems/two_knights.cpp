#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll nroComb(ll n, ll k){
	if (k>n)
		return 0;
	if (k==0 or k==n)
		return 1;
	return nroComb(n-1,k-1)
		   + nroComb(n-1,k);
}
ll nroRichard(ll n){
	if (n==3)
		return 4;
	return nroRichard(n-1) + 4*(n-2);
}
int main(){
	ll n;
	cin >> n;
	for (ll i=1;i<n+1;i++){
		if (i>2)
			cout << (i * i) * (i * i - 1) / 2 - (2*nroRichard(i)) << "\n";
		else cout << (i * i) * (i * i - 1) / 2 << "\n";
	}
}
