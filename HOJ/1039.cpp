#include<iostream>
#include<string>
using namespace std;

bool is_yuan(char a1){
	return a1=='a'||a1=='e'||a1=='i'||a1=='o'||a1=='u';
}


int main(){
	string input;
	while(cin>>input){
		if(input=="end")break;
		bool flag=true,has_yuan=false;
		int t=1,s=1;
		for(int i=0;i<(input.size()-1);i++){
			if(is_yuan(input[i])){
				has_yuan=true;
			}
			if(input[i]==input[i+1]){
				s++;
				if(s==3){
					flag=false;
					break;
				}
				
				if(s==2&&input[i]!='o'&&input[i]!='e'){
					flag=false;
					break;
				}
			}else{
				s=1;
			}
			//连续三个元音或者辅音 退出 
			if(is_yuan(input[i])==is_yuan(input[i+1])){
				t++;
				if(t==3){
					flag=false;
					break;
				}
			}else{
				t=1;
			}
		}
		
		if(is_yuan(input[input.size()-1])){
			has_yuan=true;
		}
		
		cout<<"<"<<input<<">";
		if(has_yuan&&flag){
			cout<<" is acceptable."<<endl;
		}else{
			cout<<" is not acceptable."<<endl;
		}
		
	}
	return 0;
}

