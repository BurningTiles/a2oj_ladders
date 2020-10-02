/**
 * Author  : BurninTiles
 * Created : 2020-09-28 01:06:57
 * Link    : GitHub.com/BurninTiles
 * Program : Kids Love Candies
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while(n--){
		int l, k, temp, ans=0;
		cin >> l >> k;
		while(l--){
			cin >> temp;
			ans += temp/k;
		}
		
		cout << ans << "\n";
	}

	return 0;
}

/**

Question : 
https://www.a2oj.com/p?ID=17

**/