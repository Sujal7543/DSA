#include<bits/stdc++.h>
using namespace std;
int sum =0;
void print(int n,int i){
    if(n<i){
        return ;
    }
    sum=sum+n;
    print(n-1,i); 
}
int main(){
    int n;
    cout<<"enter number you wan to do sum ";
    cin>>n;
    print(n,1);
    cout<<sum;
    return 0;
}