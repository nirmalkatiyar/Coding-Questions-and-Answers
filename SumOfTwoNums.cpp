#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b){
    while(b){
        int carry=a&b;
        cout<<carry<<" ";
        a=(a^b);
        cout<<a<<" ";
        b=carry<<1;
        cout<<b<<endl;
    }
        
        return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=sum(a,b);
    //cout<<ans;
    return 0;
}