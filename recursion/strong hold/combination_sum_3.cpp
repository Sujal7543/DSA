#include<bits/stdc++.h>
using namespace std;
void pairs(int i,int k,vector<int>&temp,int target){
    int sum=0;
    for(int i=0;i<temp.size();i++){
        sum+=temp[i];
    }
    if(sum==target && temp.size()==k){
        cout<<"{";
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<",";
        }
        cout<<"}";
        return;
    }
    if(i==10){
        return;
    }
    if(sum>target){
        return;
    }
    if(temp.size()==k){
        return;
    }
    temp.push_back(i);
    pairs(i+1,k,temp,target);
    temp.pop_back();
    pairs(i+1,k,temp,target);
}
int main(){
    int k;
    cout<<"enter maximum no can be for sum";
    cin>>k;

    int target;
    cout<<"enter target";
    cin>>target;

    vector<int>temp;
    pairs(1,k,temp,target);


    return 0;
}