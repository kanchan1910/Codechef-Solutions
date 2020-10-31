//codechef october cook-off 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        char b=str[n-1];
        int f=0;
        for(int i=0;i<n-1;i++){
            if(str[i]==b){
               f=1;
               break;
            }
        }
        if(f==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
