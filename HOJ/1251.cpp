#include<iostream>
#include<string>
#include<cstdio>
#include<map>
using namespace std;

int main(){
	string input;
	//map µÄ¸ßÐ§ 
	map<string,int> maps;
	while(getline(cin,input)){
		if(input=="")break;
		for(int i=1;i<=input.size();i++){
			string a(input,0,i);
			maps[a]++;
		}
	}
	
	string pattern;
	while(cin>>pattern)
		cout<<maps[pattern]<<endl; 
	return 0;
}
