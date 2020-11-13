/* Difference in find method of STL
 * */

# include <bits/stdc++.h>
using namespace std;

int main() {
	unordered_set <int> v = {23,54,5,46465,777,6,87};
	
	if (v.find(26)!=v.end()) 
		cout <<"Element Found "<<endl;
	else
		cout <<"Element Not Found"<<endl;
	cout << *find(v.begin(),v.end(),54)<<endl;	// Can work with Vector,deque, set, map and other non linear DS 
	
	cout << *(v.find(54))<<endl; // Only works with Non Linear DS
	return 0;
}
