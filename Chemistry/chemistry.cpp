/*  
ॐ 
*/
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cmath>
using namespace std;


void solve(){

	int n,k;
	cin>>n>>k;

	string s;
	cin>>s;

	unordered_map<char,int> freq;

	for(auto ele:s){
		freq[ele]++;
	}

	int rem = 0;
	for(auto ele:freq){
		rem += ele.second % 2;
	}

	rem -= 1;

	if(k<rem){
		cout<<"NO"<<endl;
		return;
	}else{
		cout<<"YES"<<endl;
	}
}

int main(){


	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int tc;
	cin>>tc;

	while(tc--){
		solve();	
	}

	return 0;
}
