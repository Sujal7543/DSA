#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for( int i =1;i<=n;i++){
        char count='a';
        for(int j =0;j<i;j++){
            cout<<count;
            count++;
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