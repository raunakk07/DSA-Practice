#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<int> vec(n);
    for(int i =0;i<n;i++) cin>>vec[i];
    ll sum = 0;
    for(int i =0;i<n;i++) sum+=vec[i];

    cout<<((n*(n+1))/2) - sum;
    
}