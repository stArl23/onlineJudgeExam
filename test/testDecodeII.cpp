#include<iostream>
#include<vector>
#include<map>

using namespace std;
class Solution {
public:
    int numDecodings(string s) {
        int max1=1000000007;
        if(s.size()==0)return 0;
        vector<int> dp(s.size()+1,0);
        map<string,long long> maps;
        for(int i=1;i<=26;i++){
            maps.insert(make_pair(std::to_string(i),1));
        }
        for(int i=0;i<=6;i++){
            maps.insert(make_pair("*"+std::to_string(i),2));
        }
        for(int i=7;i<=9;i++){
            maps.insert(make_pair("*"+std::to_string(i),1));
        }
        maps.insert(make_pair("*",9));
        maps.insert(make_pair("1*",9));
        maps.insert(make_pair("2*",6));
        maps.insert(make_pair("**",15));
        dp[0]=dp[1]=1;
        if(s.size()>=1){
            dp[1]=maps[s.substr(0,1)];
        }
        for(int i=2;i<=s.size();i++){
            int a1,a2=0;
            string s1=s.substr(i-1,1);
            string s2=s.substr(i-2,2);
            if(maps.count(s1)>0){
                a1=(int)((dp[i-1]*maps[s1])%max1);
            }
            
            if(maps.count(s2)>0){
                a2=(int)((dp[i-2]*maps[s2])%max1);
            }
            dp[i]=(int)((a1+a2)%max1);
        }
        for(int i=0;i<=dp.size();i++){
        	cout<<dp[i]<<" ";
		}
		cout<<endl;
        return dp[s.size()];
        
    }
};

int main(){
	Solution solution;
	solution.numDecodings("*1*1*0");
	return 0;
}
