#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cout<<"enter string value =";
    cin>>s1;

    string t1;
    cout<<"enter second string value =";
    cin>>t1;
    bool ans=true;

    if(s1.length()!=t1.length()){
        ans=false;
    }
    else{
    int arr[256]={0};

    for(int i=0;i<s1.length();i++){
        arr[s1[i]]++;
    }

    for(int i=0;i<t1.length();i++){
        arr[t1[i]]--;
    }

    for(int i=0;i<256;i++){
        if(arr[i]!=0){
            ans=false;
        }
    }
}

    if(ans){
        cout<<"anagram";
    }
    else{
        cout<<"not anagram";
    }

    

    return 0;
}