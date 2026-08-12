#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<0){
        return -1;
    }
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int f=fact(n);
    if(f<0){
        cout<<"negetive input";
    }
    else{
    cout<<f;
    }
    return 0;
}