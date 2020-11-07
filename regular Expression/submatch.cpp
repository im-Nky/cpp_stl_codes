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
		smatch m; 	//typedef std::result<string>
		regex e("([[:w:]]+)@([[:w:]]+)\.com");
						
		bool found=regex_search(s,m,e);
		for(int i=0;i<m.size();i++)
		{
			cout<<"m["<<i<<"]:s()="<<m[i]<<endl;
		}			
	}
}
