#include<bits/stdc++.h>
using namespace std;
void print(int n){
    char count='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
        }
        count+=1;
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