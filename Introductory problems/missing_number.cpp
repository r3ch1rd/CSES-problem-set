#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i<n-1;i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for (int i = 0; i<n;i++){
		if ((int(v.size())==i) or (v[i]!=i+1)){
			cout << i+1 << " ";
			break;
		}
	}
	return 0;
}
