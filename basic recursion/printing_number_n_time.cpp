#include<bits/stdc++.h>
using namespace std;
void count(int n){
    if(n==5){
        return  ; 
    }
    cout<<n<<endl;
    count(n+=1);
}
int main(){
    int n=1;
    count(n);
}
