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
    cout<<"Enter root";
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
int maxpath(treenode* root,int &ans){
    if(root==NULL){
        return 0;
    }
    int l=maxpath(root->left,ans);
    int r=maxpath(root->right,ans);
    if(l<0)l=0;
    if(r<0)r=0;
    ans=max(ans,l+r+root->data);
    return root->data+max(l,r);
}
int main(){
    treenode* root=create();
    int ans=0;
    maxpath(root,ans);
    cout<<"max pathsum="<<ans;
    return 0;
}