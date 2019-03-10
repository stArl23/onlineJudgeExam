#include <bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<map>
#include<queue>
#include<set>
#include<vector>
#include<sstream>
#include<algorithm>
#define MAX 0x3f3f3f3f
using namespace std;

int main(){
	string line;
	vector<string> ss;
	while(getline(cin,line)){
		if(line=="")break;
		ss.push_back(line);
	}
	
	bool flag=true;
	for(int i=0;i<ss.size();i++){
		for(int j=i+1;j<ss.size();j++){
			if(ss[i]==ss[j]){
				cout<<(i+1)<<" "<<(j+1)<<endl;
				flag=false;
				break;
			}
		}
		if(!flag)break;
	}
	return 0;
}
