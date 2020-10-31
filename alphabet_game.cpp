#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int val=0;
    for(int i=0;i<str.length();i++)
    val+=(92-(int)str[i]);
    cout<<val<<endl;
}
