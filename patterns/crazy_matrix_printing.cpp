#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=0;i<n*2-1;i++){
        for(int j=0;j<n*2-1;j++){
            int top=i;
            int left=j;
            int right=(n*2-2)-j;
            int bottom=(n*2-2)-i;
        cout<<(n-min(min(top,bottom),min(left,right)));
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    print(n);
}