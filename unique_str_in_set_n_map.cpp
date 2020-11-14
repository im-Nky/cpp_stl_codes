# include <bits/stdc++.h>
using namespace std;

int main() {
	string str = "i am i fucked up i";
	set <string> s,s1;
	unordered_set <string> us,us1;
	vector <string> v;
	string temp="";
	for(int i=0;i<str.size();i++) {
		if(str[i] == ' ') {
			//cout<<temp<<endl;
			us.insert(temp);
			s.insert(temp);
			v.push_back(temp);
			temp="";
		} else {
			temp = temp + str[i];
		} 
	}
	//cout << temp<<endl;
	us.insert(temp);
	s.insert(temp);
	v.push_back(temp);
	// finding first occrance of a word in a string
	for(int i=0; i<v.size(); i++) {
		if(us1.find(v[i])!=us1.end()) { 
			cout << "first repeation " << v[i] <<endl;
			break;
		}
		else
			us1.insert(v[i]);
	}
	
	// find unique words in a string 
	cout << "++++++++++++++++ set +++++++++++++++++++"<<endl;
	for(auto it:s){
		//cout<<it<<endl;
	}
	cout <<endl;
	cout <<"++++++++++++++ Unordered_set +++++++++++++++++" <<endl;
	for(auto it:us){
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;
}
