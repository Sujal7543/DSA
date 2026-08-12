#include<bits/stdc++.h>
using namespace std;
int counrt = 1;
void num(int n){
    if (n==0){
        return ;
    }
    cout<<counrt<<endl;
    counrt++;
    num(n-1);

}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    num(n);
}