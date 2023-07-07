#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){

	int n,k;
	cin>>n>>k;

	vector<int>nums(n);
	vector<int>diff;
	int sus = 0;
	for(int i=0; i<n; i++){
		cin>>nums[i];

		if(i>0){
			int temp = abs(nums[i]-nums[i-1]);
			sus += temp;
			diff.push_back(temp);
		}
	}

	sort(diff.rbegin(), diff.rend());

	int minus = 0;
	for(int i=0; i<k-1; i++){
		minus += diff[i];
	}

	cout<<sus-minus<<endl;
}

int main(){


	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int test;
	cin>>test;

	while(test--){
		solve();
	}
	return 0;
}
