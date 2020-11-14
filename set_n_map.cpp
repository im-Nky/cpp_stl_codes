/* difference among set,unordered_set, map, unordered_map */

# include <bits/stdc++.h>
using namespace std;

int main() {
	string str = "NitinKumarYadav";
	unordered_map <char,int> um;
        unordered_set <string> us;
	set <string> s;
	map <char,int> m;

	cout << "Unordered_Map"<<endl;
	for (int i=0;i<str.size();i++) {
		if(um.find(str[i])==um.end())
			um.insert(make_pair(str[i],1));
		else
			um[str[i]]++;
	}
	for(auto it:um) {
		cout << it.first <<" "<<it.second <<endl;
	}
	cout <<"++++++++++++++++++++++++++++++++++++++++"<<endl;

	cout << "Unordered_Set"<<endl;
	us.insert("Nitin");
        us.insert("Kumar");
        us.insert("Yadav");
        us.insert("Ji");

        for(auto it:us) {
                cout << it <<endl;
        }
	cout <<"++++++++++++++++++++++++++++++++++++++++"<<endl;

	cout << "Map"<<endl;
	for (int i=0;i<str.size();i++) {
                if(m.find(str[i]) == m.end())
                        m.insert(make_pair(str[i],1));
                else
                        m[str[i]]++;
        }
        for(auto it:m) {
                cout << it.first <<" "<<it.second <<endl;
        }

	cout <<"++++++++++++++++++++++++++++++++++++++++"<<endl;

	cout << "Set"<<endl;
	s.insert("Nitin");
        s.insert("Kumar");
        s.insert("Yadav");
        s.insert("Ji");

        for(auto it:s) {
                cout << it <<endl;
        }
}
