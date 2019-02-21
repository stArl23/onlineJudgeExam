#include<iostream>
#include <cmath>
#define e 2.71828182
#define PI 3.141592654
//1. 那就是利用斯特林公式来做，公式是：log10(n!)=1.0/2*log10(2*PI*n)+n*log10(n/e); 
//2. 任意一个正整数a的位数等于(int)log10(a) + 1

using namespace std;
int main() {
	int n,t;
	while(cin>>n) {
		for(int i=0; i<n; i++) {
			cin>>t;
			int w=1.0/2*log10(2*PI*(double)t)+(double)t*log10((double)t/e);
			cout<<w+1<<endl;
		}
	}
	return 0;
}
