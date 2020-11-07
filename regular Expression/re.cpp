#include<iostream>
#include<bits/stdc++.h>
//#include<regex>
using namespace std;

int main()
{
	string s;
	while(1)
	{
		cout<<"\nEnter String\n";
		cin>>s;
		//regex e("abc");
		//regex e("abc",regex_constants::icase); //for removing case sensivity
		//regex e("abc."); // . means anything except newline
		//regex e("abc?"); // ? means zero or one preceding characters
		//regex e("abc*"); // any number of preceding character
		//regex e("abc+"); // one or more preceding character
		//regex e("ab[cd]*"); //[..]any character inside square brackets
		//regex e("ab[^cd]*"); // [..]any character not inside square bracket
		//regex e("ab[cd]{3}");// exact 3 match
		//regex e("ab[cd]{3,}");// exact 3 or match 
		//regex e("ab[cd]{3,5}");// exact 3 to 5 match
		regex e("(abc|de)fg");// either abc OR de match
		
		//regex e("(abc)de+\\1");// first group 
		//regex e("(ab)c(de+)\\2\\1");// first group 
		
		/*Email matching*/
		//regex e("[[:w:]]+@[[:w:]]+\.com");// [[:w:]] word character :digit,number or underscore
		
		bool match=regex_match(s,e);
			
		cout<<	(match?"matched":"Not matched")<<endl<<endl;	
	}
}
