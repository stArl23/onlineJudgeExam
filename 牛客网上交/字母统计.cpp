#include<iostream>
#include<cstring>
using namespace std;

int arr[26];
int main(){
	string input;
	while(cin>>input){
		memset(arr,0,sizeof(arr));
		for(int i=0;i<input.size();i++){
			if(input[i]>='A'&&input[i]<='Z'){
				int t=input[i]-'A';
				arr[t]++;
			}
		}
		
		for(int i=0;i<26;i++){
			char t=i+'A';
			cout<<t<<":"<<arr[i]<<endl;
		}
	}
	return 0;
}
