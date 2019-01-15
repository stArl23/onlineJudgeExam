#include<iostream>
using namespace std;

int main(){
	int num,temp,even_num=0;
	cin>>num;
	int num_temp=num;
	while(num_temp--){
		cin>>temp;
		if(temp%2==0)even_num++;
	}
	
	if(even_num>num-even_num)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
		
} 
