#include<iostream>
#include<bits/stdc++.h>
#include<regex>
using namespace std;

int main()
{
	string s;
	while(1)
	{
		cout<<"\nEnter String\n";
		cin>>s;
		//regex e("abc");
		//regex e("^abc"); //abc only at beginning of string
		regex e("abc"); //only at abc should present at end of string
				
		bool match=regex_search(s,e);
					
		cout<<	(match?"matched":"Not matched")<<endl<<endl;	
	}
}
