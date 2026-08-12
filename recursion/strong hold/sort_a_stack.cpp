#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&st,int temp){
    if(st.empty()||st.top()<=temp){
        st.push(temp);
        return;
    }
    int val=st.top();
    st.pop();
    insert(st,temp);

    st.push(val);
}
void sort(stack<int>&st){
    if(st.empty()){
        return;
    }
    if(!st.empty()){
        int temp=st.top();
        st.pop();
        sort(st);
        insert(st,temp);
    }

}
int main(){
    stack<int>st;
    int n;
    cout<<"enter no of element in stack";
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cout<<"enter element";
        cin>>x;
        st.push(x);
    }

    sort(st);
    while(!st.empty()){
        cout<<st.top()<<",";
        st.pop();
    }

    return 0;
}