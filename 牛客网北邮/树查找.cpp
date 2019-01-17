#include<iostream>
#include<sstream>
#include<queue>
#include<string>
#include<cmath>

using namespace std;

int main(){
	int nodes[1001]={0},num,level,t;
	string temp;	
	cin>>num;
	cin.ignore();
	getline(cin,temp);
	istringstream iss(temp);
	int size=0;
	while(iss>>t){
		nodes[size+1]=t;
		size++;
	}
	cin>>level;
	
	int start=pow(2,level-1),length=pow(2,level-1);
	
	if(start>size)
		cout<<"EMPTY";
	else{
		int upBound=(start+length>size)?size:(start+length);
		for(int i=start;i<upBound;i++){
			if(i==start)cout<<nodes[i];
			else{
				cout<<" "<<nodes[i]; 
			}
		}
	}
	
}
