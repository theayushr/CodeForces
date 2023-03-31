#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void solution(){

	int n;
	cin>>n;

	int ele[n];
	for(int i=0; i<n; i++){
		cin>>ele[i];
	}

	bool isbeauti = false;
	for(int i=0; i<n; i++){
		if(ele[i] <= (i+1)){
			isbeauti = true;
			break;
		}
	}

	if(isbeauti){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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
