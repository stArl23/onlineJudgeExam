#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

//ÓÃjavaÈ¥¹ý 
void toLower(string &s) {
	transform(s.begin(),s.end(),s.begin(),::tolower);
}

int main() {
	int n;
	while(cin>>n) {
		string s,regex;
		vector<string> ss;
		for(int i=0; i<n; i++) {
			cin>>s;
			ss.push_back(s);
		}
		cin>>regex;
		toLower(regex);
		int back_index=regex.find(']')+1,front_index=regex.find('[');
		string front_regex=regex.substr(0,front_index),
		       back_regex=regex.substr(back_index,regex.size()-back_index),
		       mid_regex=regex.substr(front_index+1,back_index-front_index-2);

//		cout<<front_regex<<endl;
//		cout<<back_regex<<endl;
//		cout<<mid_regex<<endl;
		for(int i=0; i<ss.size(); i++) {
			bool flag=true;
			string t=ss[i];
			toLower(t);
			int j=0,k=0;
			if(t.size()-1==(front_regex.size()+back_regex.size())) {
				for(; j<front_regex.size(); j++) {
					if(front_regex[j]!=t[j]) {
						flag=false;
						break;
					}
				}

				int l=back_regex.size()-1,l1=t.size()-1;
				for(; k<back_regex.size(); k++) {
					if(back_regex[l-k]!=t[l1-k]) {
						flag=false;
						break;
					}
				}

				bool flag1=false;
				for(int z=0; z<mid_regex.size(); z++) {
					if(t[j]==mid_regex[z]) {
						flag1=true;
						break;
					}
				}

				if(flag1) {
					cout<<(i+1)<<" "<<ss[i]<<endl;
				}
			}
		}
	}
	return 0;
}
