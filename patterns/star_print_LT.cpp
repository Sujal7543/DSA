#include<bits/stdc++.h>
using namespace std;
void star_print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    star_print(n);
    return 0;
}