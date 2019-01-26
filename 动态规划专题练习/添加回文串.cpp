#include<iostream>
#include<algorithm>
using namespace std;

class Palindrome {
public:
	Palindrome(){
	}
	
    string addToPalindrome(string A, int n) {
        // write code here
        int i=0;
        while(!check(A,i++,n-1));
        string temp=A.substr(0,i-1);
        reverse(temp.begin(),temp.end());
        return temp;
    }
    
    bool check(string A,int a,int b){
    	bool flag=true;
    	while(a<b){
    		if(A.at(a)!=A.at(b)){
    			flag=false;
    			break;
			}
    		a++;
    		b--;
		}
		return flag;
	}
};

int main(){
	Palindrome *p=new Palindrome;
	cout<<p->addToPalindrome("acd",3)<<endl;
	return 0;
}
