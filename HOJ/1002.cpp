#include<iostream>
#include<string>
using namespace std;
struct bigInt{
	int a[1001];
	int size;
	
	void init(){
		for(int i=0;i<=1000;i++){
			this->a[i]=0;
		}
		this->size=0;
	}
	
	void set(string &s){
		int size=s.length();
		for(int i=0;i<size;i++){
			a[size-i]=s[i]-'0';
		}
		this->size=size;
	}
	
	bigInt operator + (const bigInt &b) const{
		bigInt result;
		result.init();
		int l=(size>b.size)?size:b.size;
		int carry=0;
		int i=1;
		result.size=l;
		for(;i<=l;i++){
			int temp=this->a[i]+b.a[i]+carry;
			carry=temp/10;
			result.a[i]=temp%10;
			
			
		}
		result.a[i]=carry;
		if(carry!=0)result.size++;
		return result;
	}
	
	void output(string &s1,string &s2,int time){
		cout<<"Case "<<time<<":\n";
		cout<<s1<<" + "<<s2<<" = ";
		for(int i=this->size;i>0;i--){
			cout<<this->a[i];
		}
	}
	
}num1,num2,num3;

//bug unpass
int main(){
	string s1,s2;
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		cin>>s1>>s2;
		num1.set(s1);
		num2.set(s2);
		num3.init();
		num3=num1+num2;
		num3.output(s1,s2,i);
		if(i!=num)cout<<"\n\n";
	}
	
}

