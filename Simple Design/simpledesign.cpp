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


int digitsum(int num){

	int sum = 0;

	while(num!=0){
		sum += num%10;
		num /= 10;
	}
	return sum;
}

void solve(){

	int x, k;
	cin>>x>>k;

	int sum = digitsum(x);

	while(sum%k!=0){
		x = x+1;
		sum = digitsum(x);
	}


	if(sum%k ==0){
		cout<<x<<endl;
		return;
	}
}

int main(){


	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int testcases;
	cin>>testcases;

	while(testcases--){
		solve();	
	}

	return 0;
}
