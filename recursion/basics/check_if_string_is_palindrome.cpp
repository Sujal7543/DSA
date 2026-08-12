#include<bits/stdc++.h>
using namespace std;
bool check(string s,int i,int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]==s[n-i-1]){
        return check(s,i+1,n);
    }
    else{
        return false;
    }
return true;
}
int main(){
    string s;
    cout<<"enter string";
    cin>>s;
    bool a=check(s,0,s.length());
    if(a){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}