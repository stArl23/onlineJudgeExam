#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<sstream>
#include <functional>

using namespace std;

//struct cmp{   bool operator() (int a,int b ){ return a>b;}};

int getInt(string &s,vector<int> &nums)
{
    istringstream iss(s);
    int res = 0;
    long long num;
    while(iss >> num){
		nums.push_back(num);
		res++;
	}
	return res;
        
}

int main(){
	int num,temp,k;
	while(cin>>num){
		priority_queue<int,vector<int>,greater<int> > heap;
		
		int num_temp=num;
		vector<int> nums(0);
		string temp1="";
		cin.ignore();
		getline(cin,temp1,'\n');
		getInt(temp1,nums);
		for(int i=0;i<nums.size();i++){
			heap.push(nums[i]);
		}
		
		//cin.ignore();
		cin>>k;
		int prev=0;
		for(int i=0;i<k&&!heap.empty();){
			if(heap.top()!=prev){
				temp=heap.top();
				prev=temp;
				//cout<<temp<<endl;
				i++;
			}
			heap.pop();
		}
		cout<<temp<<endl;
	}
} 
