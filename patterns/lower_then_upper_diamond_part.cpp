#include<bits/stdc++.h>
using namespace std;
void print(int n){
    int s=n/2;
    int i=0;
    for(int i=1;i<=s;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<n-2*i;j++){
            cout<<" ";
        }
        for(int j=0;j-i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
     for( i=1; i<s;i++){
        for(int j=0;j<s-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<s-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    print(n);
}