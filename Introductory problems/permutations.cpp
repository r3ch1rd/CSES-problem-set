#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if (n!=3 and n!=2){
		int i = n-1;
		while (i>0){
			cout << i << " ";
			i -= 2;
		}
		i = n;
		while (i>0){
			cout << i << " ";
			i -= 2;
		}
	}else cout << "NO SOLUTION";
}
