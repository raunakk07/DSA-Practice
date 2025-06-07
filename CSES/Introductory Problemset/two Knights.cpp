#include<bits/stdc++.h>
using namespace std;

long long combination(long long x){
    return (x*(x-1))/2;
}


int main(){
    long long n;
    cin>>n;
    if(n == 1){ cout<<"0"<<endl; return 0;}
    
    long long count = 0;
    for(int i = 0;i<n;i++){
        long long space = (i+1)*(i+1);
        
        cout<<combination(space)-count <<endl;
        count = count +8*i;
    }

}
