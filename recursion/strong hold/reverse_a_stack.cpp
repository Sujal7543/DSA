#include<bits/stdc++.h>
using namespace std;
void realrev(stack<int>&st,int temp){
    if(st.empty()){
        st.push(temp);
        return;
    }
    int val=st.top();
    st.pop();
    realrev(st,temp);

    st.push(val);
}
void rev(stack<int>&st){
    if(st.empty()){
        return;
    }
       if(!st.empty()){
        int temp=st.top();
        st.pop();
        rev(st);
        realrev(st,temp);
    }
}
int main(){
    int n;
    cout<<"enter no of element";
    cin>>n;
    stack<int>st;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter number";
        cin>>x;
        st.push(x);
    }
    rev(st);
    while(!st.empty()){
        cout<<st.top()<<",";
        st.pop();
    }

    return 0;
}