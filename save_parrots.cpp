#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n];
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
vector<int>branch,shoot;
int m;
cin>>m;
for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    branch.push_back(x);
    shoot.push_back(y);
}
for(int i=0;i<m;i++){
    int br=branch[i];
    int sh=shoot[i];
    int up=sh-1;
    int down=arr[br]-sh;
    arr[br-1]+=up;
    arr[br+1]+=down;
    arr[br]=0;
}
for(int i=1;i<=n;i++){
    cout<<arr[i]<<endl;
}
}
