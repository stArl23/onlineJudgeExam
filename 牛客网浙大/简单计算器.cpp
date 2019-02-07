#include<iostream>
#include<sstream>
#include<cstdio>
#include<vector>
using namespace std;

int main(){
	string input;
	while(getline(cin,input)){
		input+="#";
		size_t pos;
		istringstream iss(input);
		int n1,n2;
		char symbol;
		vector<double> res;
		while(iss>>n1&&n1!=0){
			res.push_back((double)n1);
			while(iss>>symbol&&symbol!='#'){
				iss>>n2;
				switch(symbol){
					case '+':
						res.push_back((double)n2);
						break;
					case '-':
						res.push_back(-(double)n2);
						break;
					case '*':
						res[res.size()-1]=res[res.size()-1]*n2;
						break;
					case '/':
						res[res.size()-1]=res[res.size()-1]/n2;
						break;
				}
			}
			
			double sum=0;
			for(int i=0;i<res.size();i++)
				sum+=res[i];
				
			printf("%.02lf\n",sum);
		}
	}
	return 0;
}
 
