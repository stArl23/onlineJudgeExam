#include<iostream>
#include<sstream>
#include<cstring>
#include<string>
using namespace std;

int hash1[100000];
int main(){
	string s;
    while(getline(cin,s)){
    	if(s=="")break;
    	size_t pos=0;
    	memset(hash1,0,sizeof(hash1));
    	while((pos=s.find(","))&&pos!=string::npos){
    		s.replace(pos,1," ");
		}
        istringstream iss(s);
        int i;
        while(iss>>i){
        	if(i>0){
        		hash1[i]=1;
			}
		}
		
		i=1;
		for(;i<100000;i++){
			if(hash1[i]==0){
				break;
			}
		}
		
		cout<<i<<endl;
    }
	return 0;
} 
