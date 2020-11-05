#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
int ans=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if((arr[i]^arr[j])>max(arr[i],arr[j]))
        ans++;
    }
}
cout<<ans<<endl;}
}
