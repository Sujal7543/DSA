#include<bits/stdc++.h>
using namespace std;
void prints(int i,int sum){
    if(i==0){
        cout<<sum;
        return;
    }
    prints(i-1,sum+i);

}
int print(int n){
    if(n==1){
    return 1;
}
return n+print(n-1);
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    int sum=0;
    prints(n,sum);
    cout<<endl;
    sum=0;
    sum=print(n);
    cout<<sum;

    return 0;
}