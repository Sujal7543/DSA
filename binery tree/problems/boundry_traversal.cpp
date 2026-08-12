
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
void traverseleft(treenode* safe,treenode* root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    if(root==safe && safe->left==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        traverseleft(safe,root->left,ans);
    }
    else{
        traverseleft(safe,root->right,ans);
    }
}
void traverseroot(treenode*root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    traverseroot(root->left,ans);
    traverseroot(root->right,ans);
}
void traverseright(treenode* safe,treenode* root,vector<int>&ans){
    if(root==safe && safe->right==NULL){
        return;
    }
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    if(root->right){
        traverseright(safe,root->right,ans);
    }
    else{
        traverseright(safe,root->left,ans);
    }
    if(root!=safe)ans.push_back(root->data);
else{
    return;
}
}
int main(){
    treenode* root=create();
    vector<int>ans;
    treenode* safety=root;
    traverseleft(safety,root,ans);
    traverseroot(root,ans);
    traverseright(safety,root,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    return 0;
}