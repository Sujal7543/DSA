#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter a number";
cin>>n;
int origional=n;
int sum=0;

while(n>0){
    int rem=n%10;
    n=n/10;
    sum=sum+(rem*rem*rem);
}
if(sum==origional){
    cout<<"armstrong number";

}
else{
    cout<<"not armstrong";
}

    return 0;
}