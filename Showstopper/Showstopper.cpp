#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void solution(){
	int n;
	cin>>n;

	int a[n], b[n];

	int maxa = 0, maxb = 0;

	for(int i=0; i<n; i++){
		cin>>a[i];
		if(maxa <= a[i]){
			maxa = a[i];
		}
	}

	for(int i=0; i<n; i++){
		cin>>b[i];
		if(maxb <= b[i]){
			maxb = b[i];
		}
	}

	if(maxa > maxb){
		for(int i=0; i<n; i++){
			if(b[i] > a[i]){
				swap(a[i] , b[i]);
			}
		}
	}
	else{
		for(int i=0; i<n; i++){
			if(a[i] > b[i]){
				swap(a[i], b[i]);
			}
		}
	}

	int nmaxa = 0, nmaxb =0;
	for(int i=0; i<n; i++){
		if(nmaxa <= a[i]){
			nmaxa = a[i];
		}
		if(nmaxb <=b[i]){
			nmaxb = b[i];
		}
	}


	if(nmaxa == a[n-1] and nmaxb == b[n-1]){
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
