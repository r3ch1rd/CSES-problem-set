#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	int a = 0,c = 0,g = 0,t = 0, q = 0, w = 0, e = 0, r = 0;
	string adn;
	cin >> adn;
	
	for(int i=0;i<int (adn.length());i++){
		if (adn[i]=='A'){
			a+=1;
			if (a>=q) q=a;
		}else a = 0;
		
		if (adn[i]=='C'){
			c+=1;
			if (c>=w) w=c;
		}else c = 0;
		
		if (adn[i]=='G'){
			g+=1;
			if (g>=e) e=g;
		}else g = 0;
		
		if (adn[i]=='T'){
			t+=1;
			if (t>=r) r=t;
		}else t = 0;
	}
	
	cout << max(max(q,w),max(e,r));
}
