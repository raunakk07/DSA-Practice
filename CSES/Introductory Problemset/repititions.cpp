#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    string s;
    cin>>s;
    int count =1;
    int maxi = count;

    for(int i = 0;i<s.size()-1;i++){
        if(s[i] == s[i+1])
            count++;
        else count = 1;
        maxi = max(count, maxi);
            
        
    }cout<<maxi;
}