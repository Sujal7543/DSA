#include<bits/stdc++.h>
using namespace std;
void print(int n){
    int i=0;
    for(i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<"*";
        }
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    print(n);

    return 0;
}

