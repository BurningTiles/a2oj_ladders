/**
 * Author  : BurninTiles
 * Created : 2020-09-28 01:13:19
 * Link    : GitHub.com/BurninTiles
 * Program : Balloons Colors
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt;
	cin >> tt;

	while(tt--){
		int n, x, y;
		cin >> n >> x >> y;
		int a[n]; for(int i=0; i<n; i++) cin >> a[i];
		
		a[0] == x && a[n-1] == y ? cout << "BOTH\n" :
		a[0] == x ? cout << "EASY\n" :
		a[n-1] == y ? cout << "HARD\n" : cout << "OKAY\n";
	}

	return 0;
}

/**

Question : 
https://www.a2oj.com/p?ID=6

**/