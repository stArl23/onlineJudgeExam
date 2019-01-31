#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


int main() {
	string temp;
	while(getline(cin,temp)) {
		vector<char> v;
		for(char i=0; i<26; i++) {
			for(int j=0; j<temp.size(); j++) {
				char t='a'+i;
				char t1=tolower(temp[j]);
				if(t1>='a'&&t1<='z'&&t1==t) {
					v.push_back(temp[j]);
				}
			}
		}

		//cout<<v.size()<<endl;
		//sort(v.begin(),v.end(),cmp);

		int z=0;
		for(int i=0; i<temp.size(); i++) {
			if(temp[i]>='a'&&temp[i]<='z'||temp[i]>='A'&&temp[i]<='Z') {
				temp[i]=v[z];
				z++;
			}
		}

		cout<<temp<<endl;

	}
	return 0;
}
