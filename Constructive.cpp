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
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int mini=*min_element(arr,arr+n);
    if(n%mini==0)
    cout<<(n/mini)<<endl;
    else
    cout<<(n/mini+1)<<endl;
}
}
