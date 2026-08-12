
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={2,7,11,15};
    int len=sizeof(a)/4;
    int t=9;
    int result=0;
    for(int i=0;i<len;i++){
        int n=t-a[i];
            cout<<i<<n;
        }
         
    return 0;
}
