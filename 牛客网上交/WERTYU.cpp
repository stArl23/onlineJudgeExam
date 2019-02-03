#include<iostream>
#include<map>
using namespace std;

int main(){
	string nums=" 1234567890-=";
	string shang=" QWERTYUIOP[]\\";
	string zhong=" ASDFGHJKL;'\"";
	string xia=" ZXCVBNM,./";
	string input;
	
	map<char,int> shang1,zhong1,xia1,nums1;
	shang1['Q']=1,shang1['W']=2,shang1['E']=3;
	shang1['R']=4,shang1['T']=5,shang1['Y']=6;
	shang1['U']=7,shang1['I']=8,shang1['O']=9;
	shang1['P']=10,shang1['[']=11,shang1[']']=12;
	shang1['\\']=13;
	
	zhong1['A']=1,zhong1['S']=2,zhong1['D']=3;
	zhong1['F']=4,zhong1['G']=5,zhong1['H']=6;
	zhong1['J']=7,zhong1['K']=8,zhong1['L']=9;
	zhong1[';']=10,zhong1['\'']=11,zhong1['"']=12;
	
	xia1['Z']=1,xia1['X']=2,xia1['C']=3;
	xia1['V']=4,xia1['B']=5,xia1['N']=6;
	xia1['M']=7,xia1[',']=8,xia1['.']=9;
	xia1['/']=10;
	
	nums1['1']=1,nums1['2']=2,nums1['3']=3,nums1['4']=4;
	nums1['5']=5,nums1['6']=6,nums1['7']=7,nums1['8']=8;
	nums1['9']=9,nums1['0']=10,nums1['-']=11,nums1['=']=12;
	
	while(getline(cin,input)){
		for(int i=0;i<input.size();i++){
			int t=0;
			if(shang1.find(input[i])!=shang1.end()){
				t=shang1[input[i]];
				if(t>1){
					t--;
				}
//				cout<<shang.at(t)<<endl;
				input[i]=shang[t];
			}else if(zhong1.find(input[i])!=zhong1.end()){
				t=zhong1[input[i]];
				if(t>1){
					t--;
				}
//				cout<<zhong.at(t)<<endl;
				input[i]=zhong[t];
			}else if(xia1.find(input[i])!=xia1.end()){
				t=xia1[input[i]];
				if(t>1){
					t--;
				}
//				cout<<xia[t]<<endl;
				input[i]=xia[t];
			}else if(nums1.find(input[i])!=nums1.end()){
				t=nums1[input[i]];
				if(t>1){
					t--;
				}
//				cout<<xia[t]<<endl;
				input[i]=nums[t];
			}
		}
		
		cout<<input<<endl;
	}
	return 0;
}
