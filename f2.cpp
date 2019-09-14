#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

// Reading from file

int main()
{
	ifstream fin;	
	char s;
	fin.open("myfile.dat");
	s=fin.get();
	while(!fin.eof())
	{
		cout<<s;
		s=fin.get();
	}
	fin.close();
	return 0;
}
