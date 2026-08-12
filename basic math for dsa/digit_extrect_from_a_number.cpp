#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cout<<"enter a number";
    cin>>n;

    int count=(int) log10(n)+1;
   /* 
    while(n>0){
        count=count+1;
        n=n/10;
    }
        */
    cout<<count;
    return 0;
}