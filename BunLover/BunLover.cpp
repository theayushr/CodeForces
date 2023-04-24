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
	long long n;
	cin>>n;

	long long length = 0;

	long long i = n;

	while(i>=1){

		if(i==n){
			length += 4*n;

		}else if(i== n-1){
			length += n-1;

		}else if(i==1){
			length += 3;

		}else{
			long long value =  ( (n*(n+1))/2 ) - 2*n;
			length+= 2*value;
			i=2;
		}

		i--;

	}

	cout<<length<<endl;
}


int main(){
	int tc; 
	cin>>tc;

	while(tc--){
		solution();
	}
	return 0;
}
