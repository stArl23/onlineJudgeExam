#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	string input,temp;
	map<string,string> values;
	map<string,string> keys;
	while(getline(cin,input)) {
		if(input=="@END@") {
			break;
		}

		string magic,function;
		int size=input.find("]");
		magic=input.substr(0,size+1);
		function=input.substr(size+2,input.size()-size-2);

		keys.insert(make_pair(magic,function));
		values.insert(make_pair(function,magic));
	}

	int n;
	cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++) {
		getline(cin,temp);
		if(temp[0]=='[') {
			if(keys.count(temp)>0) {
				cout<<keys[temp]<<endl;
			} else {
				cout<<"what?"<<endl;
			}
		} else {
			if(values.count(temp)>0) {
				string value=values[temp];
				cout<<value.substr(1,value.size()-2)<<endl;
			} else {
				cout<<"what?"<<endl;
			}
		}
	}



	return 0;
}
