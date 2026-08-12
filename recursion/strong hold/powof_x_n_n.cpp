#include<bits/stdc++.h>
using namespace std;
int powe(int x,int n){
    if(n==1){
        return x;
    }
    return x* powe(x,n-1);

}
int powerr(int x,int n){
    if(n==1){
        return x;
    }
    long long half=pow(x,n/2);

    if(half%2==0){
        return half*half;
    }
    else
        return x*half*half;
}
int main(){
    int x;
    cout<<"enter no";
    cin>>x;
    int n;
    cout<<"enter power";
    cin>>n;
    int power=powe(x,n);
    cout<<power;

    cout<<endl;

    power=powerr(x,n);
    return 0;
}