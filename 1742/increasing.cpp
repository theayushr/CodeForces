//https://codeforces.com/contest/1742/problem/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void solution(){
	int num;
	cin>>num;

	vector <long long> arr(num);
	for(int i=0; i<num; i++){
		cin>>arr[i];
	}

	int flag = 0;
	sort(arr.begin(), arr.end());

	for(int i=0; i<num-1; i++){

		if(arr[i] == arr[i+1]){
			cout<<"No\n";
			flag =1;
			break;
		}
	}

	if(flag==0){
		cout<<"Yes\n";
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
