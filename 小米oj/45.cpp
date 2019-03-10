#include <bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<map>
#include<set>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

string ss[]= {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
map<string,int> maps;
int main() {
	string line;
	for(int i=0; i<13; i++) {
		maps.insert(make_pair(ss[i],i));
	}

	while(getline(cin,line)) {
		if(line=="")break;
		vector<string> vs;
		istringstream iss(line);
		string temp;
		while(iss>>temp) {
			vs.push_back(temp);
		}

		bool flush=true;
		bool straight=true;
		string prev_color="";
		set<int> nums;
		for(int i=0; i<vs.size(); i++) {
			string t=vs[i];
			if(t=="M") {
				continue;
			} else {
				string color=t.substr(0,1);
				string num=t.substr(1,t.size()-1);
				
				//同一种编号不可能构成顺子 
				if(nums.count(maps[num])!=1){
					nums.insert(maps[num]);
				}else{
					straight=false;
				}
				
				//判断是否为同花
				if(prev_color=="") {
					prev_color=color;
				}

				if(prev_color!=color) {
					flush=false;
				}

			}
		}

		//判断是否为顺子
		bool flag=false;
		if(nums.size()>0&&straight) {
			for(auto start:nums) {
				int c=0;
				if(start<=11&&start>=9&&nums.size()!=1){
					continue;
				}
				for(int i=0;i<5;i++){
					int num1=(start+i)%13;
					if(nums.count(num1)==1){
						c++;
					}
				}
				
				if(c==nums.size()){
					flag=true;
				}
			}
		}
		
		if(!flag){
			straight=false;
		}

		if(flush&&!straight) {
			cout<<"Flush"<<endl;
		} else if(!flush&&straight) {
			cout<<"Straight"<<endl;
		} else if(flush&&straight) {
			cout<<"Straight Flush"<<endl;
		} else {
			cout<<"GG"<<endl;
		}
	}

	return 0;
}
