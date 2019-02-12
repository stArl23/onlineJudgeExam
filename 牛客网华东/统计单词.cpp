#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	string input;
	while(getline(cin,input)) {
		vector<int> ress;
		istringstream iss(input);
		string s;
		while(iss>>s) {
			ress.push_back(s.size());
		}

		for(int i=0; i<ress.size(); i++) {
			if(i==ress.size()-1) {
				cout<<ress[i]-1<<endl;
			} else {
				cout<<ress[i]<<" ";
			}

		}
	}

	return 0;
}
