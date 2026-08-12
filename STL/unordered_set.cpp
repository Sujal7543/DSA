#include<bits/stdc++.h>
using namespace std;
void explainunorderdset(){
unordered_set<int> st;
st.insert(1);
st.insert(5);
st.insert(5);
st.insert(36);
st.insert(14);
st.insert(11);
st.insert(1);
st.insert(11);

for(auto it: st){
    cout<<it<<" ";
}
}

int main(){
    explainunorderdset();
}