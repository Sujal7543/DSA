#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==11){
        return ;
    }
    cout<<n<<"= Sujal Singh Bisht"<<endl;
    print(n+=1);
}
int main(){
    int n=1;
    print(n);
}