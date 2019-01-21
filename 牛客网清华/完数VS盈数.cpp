#include<iostream>
#include<vector>

using namespace std;

int get_sum(int num){
	int result=1;
	for(int i=2;i<num;i++){
		if(num%i==0)result+=i; 
	}
	return result;
	
}
int main(){
	vector<int> es,gs;
	for(int i=2;i<=60;i++){
		int temp=get_sum(i);
		if(i==temp)es.push_back(i);
		else if(i<temp)
			gs.push_back(i);
	}
	
	cout<<"E:";
	for(int i=0;i<es.size();i++){
		cout<<" "<<es[i];	
	}
	cout<<"\nG:";
	for(int i=0;i<gs.size();i++){
		cout<<" "<<gs[i];	
	}
	return 0;
}
