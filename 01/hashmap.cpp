#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

string getNum(int i) {
	switch (i) {
	case 0 : return "zero";
	case 1 : return "one";
	case 2 : return "two";
	case 3 : return "three";
	case 4 : return "four";
	case 5 : return "five";
	case 6 : return "six";
	case 7 : return "seven";
	case 8 : return "eight";
	case 9 : return "nine";
	default : return "unknown";
	}
	return "none";
}

/**
 * https://stackoverflow.com/questions/3389648/what-is-the-difference-between-stdliststdpair-and-stdmap-in-c-stl
 *  
*/
int main() {
	map<int, string> nums1;
	for (int i = 0; i < 10; i++ ) {
		nums1.insert(make_pair(i, getNum(i)));
	}
	nums1.emplace(10, "ten");
	nums1.erase(nums1.begin());
	for (map<int, string>::iterator itr = nums1.begin(); itr != nums1.end(); itr++) {
		cout << itr -> first << " : " << itr -> second << endl;  
	}

	map<int, string>::iterator itr = nums1.find(7);
	if (itr != nums1.end()) {
		pair<int, string> keyvalue = *itr;
		cout <<"found - "<< keyvalue.first << " : " << keyvalue.second<<endl;
	}
	

	// unordered_map
	unordered_map<int, string> nums;
	for (int i = 0; i < 10; i++ ) {
		nums.insert(make_pair(i, getNum(i)));
	}
	cout << endl;
	for (pair<int, string> p : nums ) {
		cout<< p.first << " : "<< p.second<< endl;
	}
  
	return 0;
}
