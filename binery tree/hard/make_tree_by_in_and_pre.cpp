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
void print(treenode* root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    print(root->left);
    print(root->right);
}
treenode* build(int preorder[],int pstart,int pend,int inorder[],int istart,int iend,unordered_map<int,int>&inmap){
    if(pstart>pend || istart>iend){
        return NULL;
    }
    treenode* root=new treenode(preorder[pstart]);
    int ind=inmap[root->data];
    int rem=ind-istart;

    root->left=build(preorder,pstart+1,pstart+rem,inorder,istart,ind-1,inmap);
    root->right=build(preorder,pstart+rem+1,pend,inorder,ind+1,iend,inmap);
    return root;
}

int main(){
    int n;
    cout<<"enter nodes";
    cin>>n;
    int inorder[n];
    int preorder[n];
    cout<<"enter in preorder";
    for(int i=0;i<n;i++){
        cout<<"enter value";
        cin>>preorder[i];
    }
    cout<<"enter in inorder";
    for(int i=0;i<n;i++){
        cout<<"enter value";
        cin>>inorder[i];
    }

    unordered_map<int,int>inmap;
    for(int i=0;i<n;i++){
        inmap[inorder[i]]=i;
    }

    treenode*root=build(preorder,0,n-1,inorder,0,n-1,inmap);
    print(root);


    return 0;
}