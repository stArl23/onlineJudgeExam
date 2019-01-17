#include<iostream>
#include<string>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	string s1[]={"1","2","3","4","5","6","7","8","9"};
	string s2[]={"11","22","33","44","55","66","77","88","99"};
	string s3[]={"111","222","333","444","555","666","777","888","999"};
	string s4[]={"1111","2222","3333","4444","5555","6666","7777","8888","9999"};
	string s5[]={"12345","23456","34567","45678","56789"};
	string *sFind;
	if(b.size()==1){
		sFind=s1;
	}else if(b.size()==2){
		sFind=s2;
	}else if(b.size()==3){
		sFind=s3;
	}else if(b.size()==4){
		sFind=s4;
	}else{
		sFind=s5;
	}
	
	int index=0,length=(b.size()==5)?5:9,hash[11]={0};
	for(int i=0;i<length;i++){
		if(sFind[i]==b){
			index=i;
			break;
		}
	}
	
	//init hash
	
	for(int i=0;i<a.size();i++){
		hash[a.at(i)-'0']+=1;
	}
	//cout<<index<<endl;
	
	bool flag=false;
	for(int i=index+1;i<length;i++){
		int j=0;
		for(;j<sFind[i].size();j++){
			int index=sFind[i].at(j)-'0';
			//cout<<sFind[i].at(j)<<" "<<hash[index]<<endl;
			if(hash[index]>0){
				hash[index]--;
			}else{
				break;
			}
		}
		if(j==sFind[i].size())flag=true;
	}
	
	//cout<<flag<<endl;
	if(flag)
		cout<<"YES";
	else
		cout<<"NO"; 
} 
