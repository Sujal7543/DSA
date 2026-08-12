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
treenode* tree(){
    int x;
    cout<<"enter root";
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
treenode* prev=NULL;
/* recursive
void flatten(treenode* root){
    if(root==NULL){
        return;
    }
    flatten(root->right);
    flatten(root->left);
    root->right=prev;
    root->left=NULL;
    prev=root;  
}*/
int main(){
    create tree();
    treenode* rec=root;
    /*
    recursive;
    flatten(rec);
    */
    /*
    iterative;
    treenode* ite=root;
    stack<treenode*>st;
    st.push(ite);
    while(!st.empty()){
        treenode* temp=st.front();st.pop();
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
        if(!st.empty()){
            temp->right=st.top();
        }
        temp->left=NULL;
    }
    */

    treenode* curr=root;
    prev=NULL;
    while(!curr){
        if(curr->left!=NULL){
            treenode* prev=curr->left;
            while(prev->right=NULL){
                prev=prev->right;
            }
            prev->right=curr->right;
            curr->right=curr->left;
            curr->left=NULL;
        }
        curr=curr->right;
    }
    
    return 0;
}