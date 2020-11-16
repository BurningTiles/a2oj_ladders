/**
 * Author  : BurningTiles
 * Created : 2020-09-28 01:31:42
 * Link    : BurningTiles.github.io
 * Program : Omar Loves Candies, Again
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt;
	cin >> tt;

	while(tt--){
		int n, ar[128]={0}, ans=97;
		string str;
		cin >> str;

		for(int i=0; i<str.length(); i++) ar[(str[i])]++;
		for(int i=97; i<125; i++) 
			if(ar[ans]<ar[i]) 
				ans = i;
		cout << ar[ans] << " " << char(ans) << "\n";
	}

	return 0;
}

/**

Question : 
https://www.a2oj.com/p?ID=193

**/