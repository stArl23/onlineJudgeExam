#include<iostream>
#include<string>
#define N 4000
using namespace std;
// x进制转为y进制 
int conversion(int source[],int target[],int n,int x,int y){
    int size=0;
    for(int i=0;i<n;){
        int k=0;
        for(int j=i;j<n;j++){
            int t=(source[j]+k*x)%y;
            source[j]=(source[j]+k*x)/y;
            k=t;
        }
        target[size++]=k;
        while(source[i]==0) i++;
    }
    return size;
}
int main(){
    string s;
    int source[N],target[N];
    while(cin>>s){
        for(int i=0;i<s.length();i++)
            source[i]=s[i]-'0';
        int n=conversion(source,target,s.length(),10,2);
        int start;
        for(start=0;target[start]==0;start++);
        for(int i=start;i<n;i++)
            target[i-start]=target[i];
        n=conversion(target,source,n-start,2,10);
        for(int i=n-1;i>=0;i--)
            cout<<source[i];
        cout<<endl;
    }
    return 0;
}
