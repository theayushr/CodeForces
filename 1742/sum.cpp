//https://codeforces.com/contest/1742/problem/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void solution(){
	int a,b,c;
	cin>>a>>b>>c;

	
	if(a== b+c){
		cout<<"Yes\n";
	}
	else if(b== a+c){
		cout<<"Yes\n";
	}
	else if(c== a+b){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	long long t;
	cin>>t;

	while(t--){
		solution();
	}
		
	return 0;
}
