#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		map<char,int> maps;
		for(int i=0;i<s2.size();i++){
			if(maps.count(s2[i])==0){
				maps.insert(make_pair(s2[i],1));
			}else{
				maps[s2[i]]=maps[s2[i]]+1;
			}
		}
		
		bool flag=true;
		for(int i=0;i<s1.size();i++){
			if(maps.count(s1[i])==0){
				flag=false;
				break;
			}else{
				if(maps[s1[i]]>0){
					maps[s1[i]]=maps[s1[i]]-1;
				}else{
					flag=false;
					break;
				}
			}
		}
		
		if(flag){
			cout<<"true"<<endl;
		}else{
			cout<<"false"<<endl;
		}
	}
	return 0;
}
