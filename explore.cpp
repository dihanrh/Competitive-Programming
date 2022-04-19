#include <iostream>
#include <string>
using namespace std;
int main(){
	int T;
	string s;
	for(cin >> T; T; T--){
		cin >> s;
		int cnt['1'+1] = {0};
		for(auto c : s)
			cnt[c]++;
		cout << min(cnt['0'], cnt['1']) - (cnt['0'] == cnt['1']) << endl;
	}
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int z=0,o=0;
		string n;
		cin>>n;
		for(char i:n){
			i=='0'?z++:o++;
		}
		if(z==o){
			cout<<o-1<<endl;
		}else{
			cout<<min(o,z)<<endl;
		}
	}
return 0;
}
