#include<bits/stdc++.h>
using namespace std;
void explainmultimap(){
    multimap<int,char>mpp;
    mpp.insert({1,'a'});
    mpp.insert({2,'b'});
    mpp.insert({1,'a'});
    mpp.insert({3,'c'});
    mpp.insert({2,'d'});
    mpp.insert({5,'a'});
    mpp.insert({6,'b'});
    mpp.insert({9,'a'});

    for(auto it :mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    // for finding equal range elements
    auto range=mpp.equal_range(2);
    for(auto it=range.first;it!=range.second;it++){
cout<<(*it).first<<"->"<<(*it).second<<endl;
    }
}
int main(){
explainmultimap();

    return 0;
}