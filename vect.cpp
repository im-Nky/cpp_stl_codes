// Each time vector run out of memory.It doubles it's capacity.

# include <bits/stdc++.h> 
using namespace std;

int main()
{
	// vector with intialization
	vector <int> v1 {23,43,11,34,4};

	// vector of capacity 8
	vector <char> v2 (8);

	// vector with size 5 and all 5 elements holds value 10
	vector <int> v3 (5,10);
	vector <string> v4 (3,"hello");	
	
	// Vector intialized using array
	int arr[] = { 10, 20, 30 }; 
    	int n = sizeof(arr) / sizeof(arr[0]);
    	vector<int> vect(arr, arr + n);
	
	// Vector intialized using vectot v1
	vector<int> vect2(v1.begin(), v1.end());
	
	cout <<"Accessing vector elements"<<endl;
	cout <<v4[0]<<endl;
	cout <<v4[1]<<endl;
	cout <<v4[2]<<endl;

	// Inserting element at back in vector 
	v1.push_back(10);
	// v1.push_back(10*(i+1));	

	// removing last element
	v1.pop_back();
	return 0;
}
