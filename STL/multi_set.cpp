#include<bits/stdc++.h>
using namespace std;
void explainmultiset(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(13);
    ms.insert(21);
    ms.insert(12);
    ms.insert(1);
    ms.insert(11);
    ms.insert(8);
    ms.insert(6);

    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<ms.count(1)<<" ";

    auto range=ms.equal_range(1);

    for(auto it=range.first;it!=range.second;it++){
        cout<<"->"<<*it<<" ";
    }
    
}
int main(){
    explainmultiset();
    return 0;
}