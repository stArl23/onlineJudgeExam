#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	string s;
	while(getline(cin,s)) {
		if(s=="")break;
		vector<string> ss;
		size_t pos=0;
		while((pos=s.find(","))&&pos!=string::npos) {
			s.replace(pos,1," ");
		}

		istringstream iss(s);
		string s1;
		while(iss>>s1) {
			ss.push_back(s1);
		}


		string res="";
		int i=0,j=0;
		string target=ss[2],buf=ss[1];
		vector<bool> tool(target.size());
		for(int z=0;z<target.size();z++){
			tool[z]=false;
		}
		
		while(i<buf.size()&&j<target.size()) {
			if(buf[i]==target[j]) {
				i++;
				tool[j]=true;
			}
			j++;
		}
		
		

		i=0;
		for(;i<target.size(); i++) {
			if(!tool[i]) {
				res+=target[i];
			}
			//cout<<tool[i]<<" ";
		}
		//cout<<endl;

		bool flag=true;
		if(res!=ss[0]) {
			flag=false;
		}

		if(flag) {
			cout<<"true"<<endl;
		} else {
			cout<<"false"<<endl;
		}
	}

	return 0;
}
