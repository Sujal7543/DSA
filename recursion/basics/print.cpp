#include<bits/stdc++.h>
using namespace std;
void prints(int i,int n){
    if(i==n){
        return;
    }
    cout<<i+1<<",";
    prints(i+1,n); 
   
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    prints(0,n);

    return 0;
}