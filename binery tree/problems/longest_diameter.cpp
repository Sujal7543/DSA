
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
int dia(treenode* root,int &ans){
    if(root==NULL){
        return 0;
    }
    int l=dia(root->left,ans);
    int r=dia(root->right,ans);
    ans=max(ans,l+r);
    return 1+max(l,r);
}
int main(){
    treenode* root=create();
    int ans=0;
    dia(root,ans);
    cout<<"max diameter="<<ans;
    return 0;
}