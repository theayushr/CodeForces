/*  
ॐ 
*/

#include <iostream>
using namespace std;


void solution(){

	int num, digit;
	cin>>num>>digit;

	string number;
	cin>>number;

	for(int i=0; i<num; i++){
		//string nums(1,number[i]);
		//int check = stoi(nums);

		if(number[i] < digit+'0'){
			number.insert(i, to_string(digit));
			cout<<number<<"\n";
			return;
		}
	}

	number.insert(num, to_string(digit));
	cout<<number<<"\n";
}

int main(){
	int tc;
	cin>>tc;

	while(tc--){
		solution();
	}

	return 0;
}

//finally I did it 
