#include<iostream>
#include<cmath>
using namespace std;

bool judge(int i){
	int s1=(int)sqrt((double)i);
	if(i<2)return false;
	if(i==2)return true;
	for(int j=3;j<=s1;){
		if(i%j==0)return false;
		j+=2;
	}
	return true;
}

int main(){
	int num;
	while(cin>>num){
		for(int i=2;i<num;i++){
			if(judge(i)&&i%10==1){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
