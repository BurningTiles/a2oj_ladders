/**
 * Author  : BurningTiles
 * Created : 2020-10-02 09:57:37
 * Link    : BurningTiles.github.io
 * Program : Nth Smallest Value
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt;
	cin >> tt;
	while(tt--){
		int a[10], min=0, ans=1001;
		for(int i=0; i<10; i++){
			cin >> a[i];
			if (a[min]>a[i])
				min = i;
		}
		for(int i=0; i<10; i++){
			if(i==min) continue;
			if(a[i]>=a[min] && a[i]<ans)
				ans = a[i];
		}
		cout << ans << endl;
	}

	return 0;
}

/**

Question : 
https://www.a2oj.com/p?ID=159

**/