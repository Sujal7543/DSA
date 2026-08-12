#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter a number";
cin>>n;
int origional=n;
int sum=0;

int digit=0;
int s=n;
while(s>0){
    s=s/10;
    digit++;
}
int temp=n;
while(temp>0){
    int rem=temp%10;
    temp=temp/10;
    sum+=pow(rem,digit);
}
if(sum==origional){
    cout<<"armstrong number";

}
else{
    cout<<"not armstrong";
}

    return 0;
}