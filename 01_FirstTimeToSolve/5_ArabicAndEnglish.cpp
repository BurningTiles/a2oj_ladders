/**
 * Author  : BurninTiles
 * Created : 2020-09-28 01:52:08
 * Link    : GitHub.com/BurninTiles
 * Program : Arabic and English
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt;
	cin >> tt;

	while(tt--){
		int n;
		cin >> n;
		bool flag = false;
		string temp;
		vector<string> ara, arae, eng;

		for(int i=0; i<n; i++){
			cin >> temp;
			if(temp[0] != '#'){
				eng.push_back(temp);
				flag = true;
				continue;
			}
			if(flag)
				arae.push_back(temp);
			else
				ara.push_back(temp);
		}

		if(arae.size()){
			for(int i=0; i<arae.size(); i++)
				if(i==arae.size()-1)
					cout << arae[i];
				else
					cout << arae[i] << " ";
			if(ara.size() || eng.size()) cout << " ";
		}
		if(eng.size()){
			for(int i=0; i<eng.size(); i++)
				if(i==eng.size()-1)
					cout << eng[i];
				else
					cout << eng[i] << " ";
			if(ara.size()) cout << " ";
		}
		if(ara.size()){
			for(int i=0; i<ara.size(); i++)
				if(i==ara.size()-1)
					cout << ara[i];
				else
					cout << ara[i] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}

/**

Question : 
https://www.a2oj.com/p?ID=24

**/