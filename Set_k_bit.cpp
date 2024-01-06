// If u give an input 5 and 1 where at 1st position it is setting 1 in place of 0 and it outputs 7.

#include <bits/stdc++.h>
using namespace std;
int set_k_bit(int n,int k)
{
    return (1<<k)|n;
}
int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    cout<<set_k_bit(n,k)<<endl;
}
