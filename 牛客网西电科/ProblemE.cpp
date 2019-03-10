#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
using namespace std;

map<char,char> symbols;
set<char> s1;
set<char> s2;
int n;
string s;
int main() {
	symbols.insert(make_pair('(',')'));
	symbols.insert(make_pair('[',']'));
	symbols.insert(make_pair('{','}'));
	s1.insert('(');
	s1.insert('[');
	s1.insert('{');
	s2.insert(')');
	s2.insert(']');
	s2.insert('}');

	cin>>n;
	for(int j=0; j<n; j++) {
		vector<char> s3;
		cin>>s;
		bool flag=true;
		for(int i=0; i<s.size(); i++) {
			if(s1.count(s[i])>0) {
				s3.push_back(s[i]);
				continue;
			}

			if(s2.count(s[i])>0) {
				if(!s3.empty()&&symbols[s3.back()]==s[i]) {
					s3.pop_back();
					continue;
				} else {
					flag=false;
					break;
				}
			}
		}

		if(flag&&s3.empty()) {
			cout<<"yes"<<endl;
		} else {
			cout<<"no"<<endl;
		}
	}
	return 0;
}
