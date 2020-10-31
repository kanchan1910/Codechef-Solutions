//codechef october cook-off
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int t;
    cin>>t;
    while(t--){
        int D;
        cin>>D;
    int p = 1e5-2;
	vector<int> ans;
        if(D==0){
          ans.pb(1);
        }
        else{
         	while(true) {
		if(D >= p) {
			ans.push_back(p+2);
			ans.push_back(p+1);
			ans.push_back(1);
			D -= (p);
		}
		else {
			ans.push_back(D+2);
			ans.push_back(D+1);
			break;
		}
	}   
        }
	cout << ans.size() << endl;
	for(auto x : ans) 
	cout << x <<" ";
	cout << endl;
    }
}
//explanation https://youtu.be/6m8ZqvnTh4Q 
