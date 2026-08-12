#include<bits/stdc++.h>
using namespace std;
int fib(int i){
if(i<=1){
    return i;
}
return fib(i-1)+fib(i-2);
}
int main(){
   int n;
   cout<<"enter a number";
   cin>>n;
 for(int i=0;i<=n;i++){
   cout<<fib(i);}
   return 0;
}

