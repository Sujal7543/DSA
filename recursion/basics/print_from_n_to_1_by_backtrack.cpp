#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
if(i==n+1){
    return;
}
print(i+1,n);
cout<<i;

}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    print(1,n);

    return 0;
}