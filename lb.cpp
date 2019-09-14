#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> a = {23,45,56,65,46,75};
	auto lb = lower_bound(a.begin(),a.end(),100);
	auto up = upper_bound(a.begin(),a.end(),100);
	cout <<"The lower bound of 56 is " <<*lb << endl; 
	cout <<"The Upper bound of 56 is " <<*up << endl;
}
