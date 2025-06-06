#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long z = max(x,y)-1;
        long long z2 = z*z;
        if(z%2==0){
            if(x>y) cout<<z2+y<<endl;
            else cout<<z2+2*z - x+2<<endl;
        }else{
            if(x>y) cout<<z2+2*z - y +2<<endl;
            else cout<<z2+x<<endl;
        }
    }
}