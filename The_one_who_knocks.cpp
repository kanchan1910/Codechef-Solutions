#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        lli x,y;
        cin>>x>>y;
        if(x==y){
            cout<<0<<endl;
            continue;
        }
        if(y>x){
            //add
            int diff=y-x;
            if(diff%2!=0){
                cout<<1<<endl;
                continue;
            }
            else if(diff%4!=0){
                cout<<2<<endl;
                continue;
            }
            else{
                cout<<3<<endl;
                continue;
            }
        }
        if(y<
            elsex){
            //sub
            int diff=x-y;
            if(diff%2!=0){
                cout<<2<<endl;
                continue;
            }{
                cout<<1<<endl;
                continue;
            }
        }
    }
}
//OBSERVATION BASED
