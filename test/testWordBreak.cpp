#include<vector>
#include<unordered_set>
#include<queue>
#include<iostream>

using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(),wordDict.end());
        if(dict.size()==0) return false;
        
        vector<bool> dp(s.size()+1,false);
        dp[0]=true;
        
        for(int i=1;i<=s.size();i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(dp[j])
                {
                    string word = s.substr(j,i-j);
                    if(dict.find(word)!= dict.end())
                    {
                        dp[i]=true;
                        break; //next i
                    }
                }
            }
        }
        return dp[s.size()];
    }
};

int main(){
	Solution solution;
	long long i=1000000007;
	cout<<(int)((i*9-1)%i)<<endl;
//	vector<string> ss;
//	ss.push_back("cb");
//	ss.push_back("bb");
//	ss.push_back("rs");
//	bool flag=solution.wordBreak("ccbb",ss);
//	if(flag){
//		cout<<"yes"<<endl;
//	}else{
//		cout<<"no"<<endl;
//	}
	return 0;
} 
