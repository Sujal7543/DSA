#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i;j+=2){
            cout<<"*";
        }
        cout<<endl;
        }
        cout<<endl;
    }

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    print(n);
    return 0;
}