#include<bits/stdc++.h>
using namespace std;
void pairs(int i,int n,vector<int>&temp){
    if(temp.size()==n){
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<",";
        }
        cout<<endl;
        return;
    }
    temp.push_back(0);
    pairs(i+1,n,temp);
    temp.pop_back();
    if( temp.back()!=1){
    temp.push_back(1);
    pairs(i+1,n,temp);
    temp.pop_back();
    }
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int>temp;
    pairs(0,n,temp);

    return 0;
}