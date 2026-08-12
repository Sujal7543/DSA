/*
#include<bits/stdc++.h>
using namespace std;
struct treenode{
    int data;
    treenode* left;
    treenode* right;
    treenode(int data1){
        data=data1;
        left=NULL;
        right=NULL;
    }
};
treenode* buildtree(){
    int x;
    cout<<"enter root node";
    cin>>x;
    treenode* root=new treenode(x);
    queue<treenode*>q;
    q.push(root);
    while(!q.empty()){
        treenode* temp=q.front();
        q.pop();
        int l;
        int r;
        cout<<"enter left node";
        cin>>l;
        cout<<"enter right node";
        cin>>r;
        if(l!=-1){
            temp->left=new treenode(l);
            q.push(temp->left);
        }
        if(r!=-1){
            temp->right=new treenode(r);
            q.push(temp->right);
        }
    }
return root;
}
int main(){
treenode* root=buildtree();
vector<int>ans;
stack<treenode*>st;
treenode* curr=root;
while(curr!=NULL || !st.empty()){
    if(curr!=NULL){
        st.push(curr);
        curr=curr->left;
    }
    else{
        treenode* temp=st.top()->right;
        if(temp==NULL){
            temp=st.top();
            st.pop();
            ans.push_back(temp->data);
            while(!st.empty() && temp==st.top()->right){
                temp=st.top();
                ans.push_back(temp->data);
                st.pop();
            }
        }
        else{
        curr=temp;
        }
    }
}

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
struct treenode{
    int data;
    treenode* left;
    treenode* right;

    treenode(int data1){
        data=data1;
        left=NULL;
        right=NULL;
    }
};
treenode* create(){
    int x;
    cout<<"enter root value";
    cin>>x;
    if(x==-1){
        return NULL;
    }
    treenode* root=new treenode(x);

    queue<treenode*>q;
    q.push(root);

    while(!q.empty()){
        treenode* temp=q.front();
        q.pop();

        int l;
        cout<<"enter left node ";
        cin>>l;
        int r;
        cout<<"enter right node";
        cin>>r;

        if(l!=-1){
            temp->left=new treenode(l);
            q.push(temp->left);
        }
        if(r!=-1){
            temp->right=(new treenode(r));
            q.push(temp->right);
        }
    }
 return root;
}
int main(){
    treenode* root=create();
    vector<int>ans;
    stack<treenode*>st;
    treenode* curr=root;
    while(curr!=NULL || !st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        else{
            treenode* temp=st.top()->right;
            if(temp==NULL){
                ans.push_back(st.top()->data);
                st.pop();
                while(!st.empty() && temp==st.top()->right){
                    temp=st.top();
                    ans.push_back(temp->data);
                    st.pop();
                }
            }
            curr=temp;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    return 0;
}