/*  
ॐ 
*/

#include <iostream>
#include <vector>
#include <string>
#include<unordered_map>
#include <algorithm>

using namespace std;

 
void solution(){
	int n;
	cin>>n;

	vector<long long> arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	sort(arr.begin(), arr.end());

	long long first = 0 , second = 0;
	first = arr[0]* arr[1];
	second = arr[n-1]*arr[n-2];

	cout<<max(first, second)<<endl;
}


int main(){
	int tc; 
	cin>>tc;

	while(tc--){
		solution();
	}
	return 0;
}
