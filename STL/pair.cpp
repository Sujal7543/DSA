#include<bits/stdc++.h>
using namespace std;
void explainpair(){
    pair<int,int> pr1={5,8};
    cout<<pr1.first<<" "<<pr1.second<<" ";

    pair<pair<int,char>,int> pr2={{4,'s'},5};
    cout<<pr2.first.second<<" "<<pr2.second;

}
int main(){
explainpair();
    return 0;
}