#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	while(cin>>n&&n!=0){
		int temp,score;
		vector<int> res;
		for(int i=0;i<n;i++){
			cin>>temp;
			res.push_back(temp);
		}
		cin>>score;
		
		int time=0;
		for(int i=0;i<n;i++){
			if(res[i]==score){
				time++;
			}
		}
		
		cout<<time<<endl;
	}
	return 0;
} 
