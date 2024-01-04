#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin >> n;
	if ((n*(n+1) / 2)%2==1) cout << "NO" << "\n";
	else{
		cout << "YES"<<"\n";
		if (n%2==0){
			cout << n/2<<"\n";
			for (ll i=1;i<=n;i=i+2){
				if (i!=(n+2)/2)
					cout << i << " ";
				else{
					i+=1;
					cout << i<<" ";
				}}
			cout << "\n"<< n/2 <<"\n";
			for (ll i=2;i<=n;i=i+2){
				if (i!=n/2) 
					cout << i << " ";
				else{
					cout << i<<" ";
					i-=1;
				}}}
		else{
			cout << (n+1)/2 <<"\n";
			for (ll i=1;i<=n;i=i+2){
				if (i!=(n+3)/2)
					cout << i<<" ";
				else{
					i-=1;
					cout << i<<" ";
				}}
			cout <<'\n'<<(n-1)/2<<'\n';
			for (ll i=2;i<=n;i=i+2){
				if (i!=(n+1)/2)
					cout << i<<" ";
				else{
					i+=1;
					cout << i<<" ";
				}}}}}
