#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//怀疑此题有问题 
vector<string> split(string str,string token) {
	size_t pos=0;
	vector<string> res;
	res.clear();
	while((pos=str.find(token))&&pos!=string::npos) {
		res.push_back(str.substr(0,pos));
		str.erase(0,pos+token.length());
	}
	res.push_back(str);
	return res;
}

int main() {
	int num;
	string input;
	while(cin>>num&&num>0&&num<=10) {
		vector<string> ress;
		ress.clear();
		vector<vector<string>> ress1;
		for(int i=0; i<num; i++) {
			cin>>input;
			ress.push_back(input);
		}
		sort(ress.begin(),ress.end());

		ress1.clear();
		for(int i=0; i<num; i++) {
			ress1.push_back(split(ress[i],"\\"));
		}

		for(int i=0; i<ress1.size(); i++) {
			string space="";
			for(int j=0; j<ress1[i].size(); j++) {
				if(i!=0) {
					if(j<ress1[i-1].size()&&ress1[i-1][j]!=ress1[i][j]) {
						cout<<space<<ress1[i][j]<<endl;
						//if(j!=(ress1[i].size()-1))cout<<endl;
					}
				} else {
					cout<<space<<ress1[i][j]<<endl;
					//if(j!=(ress1[i].size()-1))cout<<endl;
				}
				space+="  ";
			}
		}
		//cout<<endl;
	}
	return 0;
}
