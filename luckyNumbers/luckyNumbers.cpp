#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;


int findlucky(int num){

	int largest = num%10;
	int smallest = num%10;

	while(num!=0){
		largest = max(largest, num%10);
		smallest = min(smallest, num%10);
		num/=10;
	}
	return (largest - smallest);//complexity o(n)
}


void solution(){

	//brute force

	int l,r;
	cin>>l>>r;

	int maxlucky = 0;
	int luckynum = 0;


	for(int i=l; i<=r; i++){ 		//inclusive l and r
		//complexity o(n^2)		

		if(findlucky(i) >= maxlucky){
			maxlucky = findlucky(i);
			luckynum = i;
		}
		if(maxlucky==9)break;
	}
	cout<<luckynum<<"\n";
}

int main(){

	long long tc;
	cin>>tc;

	while (tc--){
		solution();
	}
	return 0;
}

//accepted
