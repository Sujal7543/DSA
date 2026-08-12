#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    int origional=n; 
    int reverse=0;
    int rem=0;
    while(n>0){
    rem=n%10;
    n=n/10;
 reverse=(reverse*10)+rem;
    }
    if(reverse==origional){
        cout<<"palindrom number";
    }
    else{
        cout<<"not palindrome number";
    }
    return 0;
}