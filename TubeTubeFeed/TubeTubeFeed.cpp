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
	int n,t;
	cin>>n>>t;

	vector<int> dur(n);
	for(int i=0; i<n; i++){
		cin>>dur[i];
	}

	vector<int> value(n);
	for(int i=0; i<n; i++){
		cin>>value[i];
	}

	int index = -1;
	int maxValue = -1;
	int extime = 0;

	for(int i=0; i<n; i++){

		if(dur[i] + extime <= t ){
			if(maxValue<=value[i]){
				index = i+1;
				maxValue = max(maxValue, value[i]);
			}
		}
		extime++;
	}
	cout<<index<<endl;
}


int main(){
	int tc; 
	cin>>tc;

	while(tc--){
		solution();
	}
	return 0;
}
