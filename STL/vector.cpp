#include<bits/stdc++.h>
using namespace std;
void explainvector(){
    vector<int> vec={2,5};
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(3);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    for(auto i :vec){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>dupvec(vec.begin()+1 ,vec.end());
    for(auto i:dupvec){
        cout<<i<<" ";
    }
}
int main(){
explainvector();
return 0;
}