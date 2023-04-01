#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

void solution(){

	int n; 
	cin>>n;

	vector<int> a(n);
	vector<int> b(n);

	for(int i=0; i<n; i++){
		cin>>a[i]>>b[i];

		if(a[i]!=b[i]){
			cout<<"rated\n";
			return;
		}
	}

	for(int i=1; i<n; i++){
		if(a[i] > a[i-1]){
			cout<<"unrated\n";
			return;
		}
	}

	cout<<"maybe\n";
}

int main(){

	int tc=1;
	//cin>>tc;

	while (tc--){
		solution();
	}
	return 0;
}
