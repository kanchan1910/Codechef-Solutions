#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int left[n],right[n];
        left[0]=arr[0];
        for(int i=1;i<n;i++){
            left[i]=min(arr[i],left[i-1]+1);
        }
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=min(arr[i],right[i+1]+1);
        }
        for(int i=0;i<n;i++){
            cout<<min(left[i],right[i])<<" ";
        }
        cout<<endl;
    }
}
//LINEAR DYNAMIC PROGRAMMING BASED
