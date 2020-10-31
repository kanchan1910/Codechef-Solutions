#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int bob=0,alice=0,both=0;
        for(int i=0;i<n;i++){
            if(arr[i]%a==0){
                bob++;
            }
            else if(arr[i]%b==0){
                alice++;
            }
            else if(arr[i]%a==0&&arr[i]%b==0){
                both++;
            }
        }
        if(both==0){
            if(bob>alice){
                cout<<"BOB"<<endl;
            }
            else{
                cout<<"ALICE"<<endl;
            }}
            else{
                if(bob>=alice){
                    cout<<"BOB"<<endl;
                }
                else{
                    cout<<"ALICE"<<endl;
                }
                
            }
    }
}
