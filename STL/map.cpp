#include<bits/stdc++.h>
using namespace std;
void explainmap(){
    map <int ,string> mpp;
    mpp[1]="sujal";
    mpp[2]="mohit";
    mpp[3]="rohit";
    mpp[4]="chandni";
    mpp[5]="nishant";
    mpp.insert({6,"siddarth"});
  /*(1)print
    for (auto it : mpp){
        cout<<it.first<<" "<<it.second <<endl;;
    }*/
/* (2)find
    auto it=mpp.find(4);
    cout<<(*it).first<<" "<<(*it).second;*/
/*(3) size
    cout<<mpp.size();
}*/
/*(4) lowerbound/upperbound
auto it=mpp.upper_bound(3);
if(it!=mpp.end()){
cout<<(*it).first<<" "<<(*it).second;
}*/

}
int main(){
explainmap();
    return 0; 
}