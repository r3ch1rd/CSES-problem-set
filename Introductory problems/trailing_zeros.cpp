#include <bits/stdc++.h>
using namespace std;
typedef int ll;
int main(){
	ll n,cincos=0,e=1;
	cin >> n;
	for (ll i=5;i<=n;i=i+5){
		e=i;
		while(e%5==0){
			cincos+=1;
			e/=5;
		}
	}
	cout << cincos;
}
