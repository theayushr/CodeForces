#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;


void solution(){
	long long n;
	cin>>n;

	if(n%2==0){
		cout<<"-1\n";
		return;
	}

	vector<int> candies; 

	while(n!=1){

		int temp1 = (n-1)/2;
		int temp2 = (n+1)/2;

		if(temp1%2 !=0){
			candies.push_back(2);
			n = (n-1)/2;
		}

		if(temp2%2 !=0){
			candies.push_back(1);
			n = (n+1)/2;
		}
	}

	cout<<candies.size()<<endl;
	for(int i=candies.size() -1 ; i>=0; i--){
		cout<<candies[i]<<" ";
	}
}

int main(){

	int tc;
	cin>>tc;

	while (tc--){
		solution();
	}
	return 0;
}
