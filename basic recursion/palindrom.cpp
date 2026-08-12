#include<bits/stdc++.h>
using namespace std;
bool pal(int i,char s[],int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return pal(i+1,s,n);
}

int main(){
   char s[100];
   cout<<"enter string";
   cin>>s;

   int n=strlen(s);

   if(pal(0,s,n)){
    cout<<"palindrome";
   }
   else if(pal(0,s,n)){
    cout<<"not palindrome";
   }
   return 0;
}