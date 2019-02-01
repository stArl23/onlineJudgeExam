#include<iostream>
#include<algorithm>
#include<vector> 
#include<cmath>
using namespace std;

bool is_legal(string temp){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(i==j)continue;
			int t_x=i,t_y=temp[i]-'0',x=j,y=temp[j]-'0';
			double result=(double)(t_x-x)/(t_y-y);
			result=abs(result);
			if(result==1.0)return false;
			
		}
	}
	return true;
}
int main(){
	string temp="12345678";
	vector<string> ss;
	sort(temp.begin(),temp.end());
	do{
		if(is_legal(temp)){
			ss.push_back(temp);
		}
	}while(next_permutation(temp.begin(),temp.end()));
	sort(ss.begin(),ss.end()); 
	int num;
//	for(int i=0;i<ss.size();i++){
//		cout<<ss[i]<<endl;
//	}
	while(cin>>num){
		cout<<ss[num-1]<<endl;
	}
	return 0;
}
