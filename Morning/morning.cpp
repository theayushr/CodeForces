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


void solve(){

	string num;
	cin>>num;

	int at = 1;
	int time = 0;

	for(int i=0; i<num.size(); i++){
		
		int digit = int(num[i]-'0');

		if(digit == 0){
			time += 11 - at;
			at = 10;
		}else{
			if(digit>at){ //right shift
				time += digit - at + 1;
				at = digit;
			}else{ //left shift
				time += at - digit + 1;
				at = digit; 
			}
		}
	}

	cout<<time<<"\n";
	return;
}

int main(){


	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int tc;
	cin>>tc;

	while(tc--){
		solve();	
	}

	return 0;
}
