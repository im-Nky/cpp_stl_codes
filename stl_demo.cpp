#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// C++ STL
	vector <int> a = {11,2,13,4,5,19,6};
	
	cout << a[1]<<endl;

	sort(a.begin(),a.end()); //o(nlogn)
	
	vector <int> :: iterator it;
	for (it = a.begin();it != a.end();it++)
	{
		cout <<*it<<"\t";
	}
	cout<<endl;
	
	bool present = binary_search(a.begin(),a.end(),3);
	cout <<"The number 3 is present in array or not"<<present<<endl;

	present = binary_search(a.begin(),a.end(),4);
	cout <<"The number 4 is present in array or not"<<present<<endl;

	//a.push_back(100);
	present = binary_search(a.begin(),a.end(),11);	//true
	cout <<"The number 11 is present in array or not"<<present<<endl;

	a.push_back(101);
	a.push_back(231);
	a.push_back(100);
	a.push_back(35);
	a.push_back(89);

	for (int x:a)
        {
                cout <<x<<"\t";
        }
	cout<<endl;

	auto it1 = lower_bound(a.begin(),a.end(),100);
	cout << "Lower bound is"<<*it1<<endl;

	auto it2 = upper_bound(a.begin(),a.end(),100);
	cout << "Upper Bound is"<<*it2<<endl;


	cout <<"+++++++++++++++++++++++++++++++++++++++"<<endl;

}


void set_demo()
{
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(-1);
	s.insert(-10);

	for(int x:s)
		cout<<x<<" ";
	
	cout<<endl;

	auto it = s.find(-1);
	if (it == s.end())
	{
		cout<< "Not present\n";
	}	
	else
	{
		cout<< "present\n";
		cout<< *it << endl;
	}

	auto it2 = s.upper_bound(-1);
	auto it3 = s.upper_bound(0);

	cout << *it2 << " " << *it3 <<endl;
	
	auto it4 = s.upper_bound(2);
	if (it4 == s.end())
	{
		cout << "not found"<<endl;
	}

void mapdemo()
{
	map <int, int> m;
	m[1] = 100;
	m[2] = -1;
	m[3] = 200;
	m[10000232] = 1;

	map <char,int> cnt;
	string s = "Nitin Kumar Yadav";

	for (char c:x) 
	{
		cnt[c]++;
	}

	cout << cnt['a'] << " " << cnt['z']<<endl;
}

