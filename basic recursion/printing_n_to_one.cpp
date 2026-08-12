#include<bits/stdc++.h>
using namespace std;
void num(int n,int i){
    if (n<i){
        return ;
    }
    cout<<n<<endl;
    num(n-1,i);

}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    num(n,1);
}