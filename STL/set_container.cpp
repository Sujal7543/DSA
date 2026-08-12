#include<bits/stdc++.h>
using namespace std;
void explainset(){
    set<int> st;
    st.insert(2);
    st.insert(21);
    st.insert(21);
    st.insert(21);
    st.insert(32);
    st.insert(12);
 
    /*(1)for(auto it:st){cout<<it<<" ";}*/

    /*(2)auto it=st.find(12);
    if(it!=st.end()){cout<<*it<<" ";}
    else{cout<<"not in set";}*/
    
    /*(3)cout<<st.count(13)<<endl;check if number exist or not ans in 1 or 0;*/

    /*(4)st.erase(21);
    for(auto it:st){cout<<it<<" ";}*/
 
    /*(5)auto it1=st.begin();
    it1++;
    auto it2=st.end();
    it2--;
    st.erase(it1,it2);
    for(auto it:st){cout<<it<<" ";}(deleting specific things between start to end )*/
    
    /*(6)auto it=st.lower_bound(12);
    cout<<*it;(lower bound function always go tp (set number >= given number in bound))*/

     /*(7)auto it=st.upper_bound(12);
     cout<<*it;(upper bound function always go to(awt number>given number in bound))*/
    

}
int main (){
    explainset();
}