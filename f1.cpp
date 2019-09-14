#include<iostream>
#include<fstream>
using namespace std;
// writing in a file

int main()
{
	ofstream fout;
	fout.open("myfile.dat");
	fout<<"Hell";
	fout.close();
	return 0;
}
