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
treenode* build(int postorder[],int pstart,int pend,int inorder[],int istart,int iend,unordered_map<int,int>&inmap){
    if(istart>iend || pstart>pend){
        return NULL;
    }
    treenode* root=new treenode(postorder[pstart]);
    int ind=inmap[root->data];
    int rem=iend-ind;

    root->left=build(postorder,pstart+rem+1,pend,inorder,istart,ind-1,inmap);
    root->right=build(postorder,pstart+1,pstart+rem,inorder,ind+1,iend,inmap);
    return root;
}
void print(treenode* root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data<<",";
    print(root->right);
}
int main(){

    int n;
    cout<<"Enter no of nodes in tree";
    cin>>n;

    int postorder[n];
    int inorder[n];
    cout<<"enter element in postorder";
    for(int i=0;i<n;i++){
        cout<<"Enter value";
        cin>>postorder[i];
    }
    cout<<"enter element in inorder";
    for(int i=0;i<n;i++){
        cout<<"enter value";
        cin>>inorder[i];
    }
    reverse(postorder,postorder+n);
    unordered_map<int,int>inmap;
    for(int i=0;i<n;i++){
        inmap[inorder[i]]=i;
    }

    treenode* root=build(postorder,0,n-1,inorder,0,n-1,inmap);
    print(root);

    return 0;
}