#include<bits/stdc++.h>
using namespace std;
void print(int n){
    int i = 1;
    for( i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        char count='A';
        for(int j=0;j<i;j++){
            cout<<count;
            count++;
        }
        count-=2;
        for(int j=n-1;j>n-i;j--){
            cout<<count;
            count--; 
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cout<< "enter number";
    cin>>n;
    print(n);
}