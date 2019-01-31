#include<iostream>
#include<string>
#include<map>
using namespace std;

int count_substr(string source,string target){
	int res=0;
	for(int i=0;i<source.size();i++){
		int flag=0;
		for(int j=0;j<target.size();j++){
			if(source[i+j]!=target[j]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			res++;
		}
	}	
	return res;
}

int main(){
	string temp;
	while(cin>>temp){
		map<string,int> c;
		for(int i=0;i<temp.size();i++){
			for(int j=1;j<=temp.size()-i;j++){
				string t=temp.substr(i,j);
				int n=count_substr(temp,t);
				if(n>1){
					c.insert(make_pair(t,n));
				}
			}
		}	
		
		//map µÄ²Ù×÷¼¼ÇÉ 
		for(std::map<string, int>::iterator i = c.begin();i!=c.end();i++){
			cout<<i->first<<" "<<i->second<<endl;
		}
	}
	return 0;
}
