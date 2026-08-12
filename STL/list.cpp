#include<bits/stdc++.h>
using namespace std;
void explainlist(){//list are all same as vector but it has push front feature.
list<int> ls={2,3,4};
ls.push_front(1);
for(auto it: ls){
    cout<<it<<" ";
}
}
int main(){
    explainlist();
}