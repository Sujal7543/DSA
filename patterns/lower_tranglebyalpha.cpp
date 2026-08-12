#include<bits/stdc++.h>
using namespace std;
void print(int n){
    
    for(int i=1;i<=n;i++){
        char count='A';
        for(int j=0;j<=n-i;j++){
            cout<<count;
            count++;
        }
    cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    print(n);

    return 0;
}