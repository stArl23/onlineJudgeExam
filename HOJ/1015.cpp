#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;

string charTostring(char v,char w,char x,char y,char z ){
	stringstream stream;
	stream<<v<<w<<x<<y<<z;
	return stream.str();
}
int main() {
	string input;
	int target;
	while(cin>>target>>input) {
		if(target==0&&input=="END"){
			break;
		}
		bool flag=false;
		char v,w,x,y,z;
		string res="";
		for(int i=0; i<input.size(); i++) {
			v=input[i];
			for(int j=0; j<input.size(); j++) {
				if(j==i) {
					continue;
				}
				w=input[j];
				for(int k=0; k<input.size(); k++) {
					if(k==i||k==j) {
						continue;
					}
					x=input[k];
					for(int l=0; l<input.size(); l++) {
						if(l==i||l==j||l==k) {
							continue;
						}
						y=input[l];
						for(int h=0; h<input.size(); h++) {
							if(h==l||h==i||h==j||h==k) {
								continue;
							}
							z=input[h];
							
							int v1=(v-'A')+1,w1=(w-'A')+1,x1=(x-'A')+1,y1=(y-'A')+1,z1=(z-'A')+1;
							if((v1-w1*w1+x1*x1*x1-y1*y1*y1*y1+z1*z1*z1*z1*z1)==target){
								flag=true;
								if(res==""){
									res=charTostring(v,w,x,y,z);
								}else{
									string res1=charTostring(v,w,x,y,z);
									if(res<res1){
										res=res1;
									}
								}
							}
						}
					}
				}
			}
		}
		
		if(!flag)
			cout<<"no solution"<<endl;
		else
			cout<<res<<endl;
	}
	return 0;
}
