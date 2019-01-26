#include<iostream>
#include<string>
#include<vector>
using namespace std;

int findIP(string proxy_ip,vector<string> server_ips,int start){
	int result=server_ips.size()-1;
	for(int i=start;i<server_ips.size();i++){
		if(server_ips[i]==proxy_ip){
			result=i;
			break; 
		}
	}
	return result;
	
} 


int main(){
	int n,m;
	while(cin>>n){
		string temp;
		vector<string> proxys,servers;
		while(n--){
			cin>>temp;
			proxys.push_back(temp);
		}
		
		cin>>m;
		while(m--){
			cin>>temp;
			servers.push_back(temp);
		}
		
		bool flag=true;
		int change=0;
		//贪心算法查找能使用最多时间的ip 
		if(proxys.size()==1){
			if(findIP(proxys[0],servers,0)!=(servers.size()-1))flag=false;
		
		}else{
			int max_id=0,temp=0,prev=-1;
			while(max_id<servers.size()-1){
				change++;
				for(int i=0;i<proxys.size();i++){
					if(i==prev)continue;
					int t=findIP(proxys[i],servers,max_id);
					if(t>temp){
						temp=t;
						prev=i;
					}
				}
				max_id=temp;
			}
		}
		
		if(flag){
			cout<<(change-1)<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
