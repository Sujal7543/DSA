
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
int checkbalance(treenode* root){
    if(root==NULL){
        return 0;
    }
    int l=checkbalance(root->left);
    int r=checkbalance(root->right);
    if(l==-1 || r==-1){
        return -1;
    }
    if(abs(l-r)<=1){
        return 1+max(l,r);
    }
    else{
        return -1;
    }
}
int main(){
    treenode* root=create();
    int ans=checkbalance(root);
    if(ans==-1){
        cout<<"not balance";
    }
    else{
        cout<<"balance tree";
    }
    return 0;
}