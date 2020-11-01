#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,q;
        scanf("%d%d",&n,&q);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
            int c=0;
            for(int i=0;i<n-1;i++){
                if(arr[i]==arr[i+1])
                c++;
            }
            int len=(n-c);   
            while(q--){
                int x,y;
                scanf("%d%d",&x,&y);
                x--;
                if(x-1>=0){
                if(arr[x]!=arr[x-1])
                len--;
                if(y!=arr[x-1])
                len++;
                }
                if(x+1<n){
                if(arr[x]!=arr[x+1])
                len--;     
                if(y!=arr[x+1])
                len++;     
                }
                arr[x]=y;
                printf("%d\n",len);
            }
    }
}
