#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        lli sum=0;
        lli ans=0;
        for(int i=0;i<n;i++){
            lli x;
            cin>>x;
            ans|=x;
            sum+=x;
            ans|=sum;
        }
        cout<<ans<<endl;
    }
}
/*Let the sequence formed by writing down the sum of elements of each 2^N2 
N subsequences of the sequence aa is : b_1, b_2, ... b_{2^N}b 
Note the maximum element in the sequence bb is the sum of all elements in the sequence aa,
 so the final answer which we have to compute by doing bitwise OR of all the elements of the 
 sequence bb will have the same number of bits in its binary representation as of the maximum number
 in sequence bb.So this observation gives us a hint that if for each bit position, 
 if we can find out that is it possible to make it 11 by summing some or all elements of sequence
 aa then we can compute the answer.To give you an intuition about why the above process works. 
 Suppose we consider a bit-ii, and if there is at least one element in the sequence aa which have 
 11 at bit-ii in its binary representation then, as it is the subsequence(where we will select
 only this element) then we will have 11 at bit-ii in the binary representation of the final
 answer. Suppose we don’t have elements with bit-ii equals 11, but we have 22 numbers whose
 bit-(i-1)(i−1) is 11 or 44 numbers whose bit-(i-2)(i−2) is 11 , then we can make 11 at bit-ii by 
 selecting these numbers as subsequence. Similarly, you can think of many other possible constructions. 
 One more example is if you have 22 numbers with bit-(i-2)(i−2) equals 11 and 11 number with
 bit-(i-1)(i−1) equals 11 (and for simplicity consider rest all bits are 0 in these 3 numbers) 
 then if we add these 33 numbers together we will get a number with bit-ii equals 11.*/

