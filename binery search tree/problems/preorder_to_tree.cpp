#include<bits/stdc++.h>
using namespace std;
struct treenode{
    int data;
    treenode* left;
    treenode*  right;
    treenode(int data1){
        data=data1;
        left=NULL;
        right=NULL;
    }
};
treenode* make(vector<int>preorder,int pstart,int pend,vector<int>inorder,int istart,int iend,unordered_map<int,int>&inmap){
    if(istart>iend || pstart>pend){
        return NULL;
    }
    treenode* root=new treenode(preorder[pstart]);
    int ind=inmap[root->data];
    int rem=ind-istart;

   root->left=make(preorder,pstart+1,pstart+rem,inorder,istart,ind-1,inmap);
   root->right=make(preorder,pstart+rem+1,pend,inorder,ind+1,iend,inmap);
    return root;
}
void print(treenode* root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data;
    print(root->right);
}
int main(){
    int n;
    cout<<"enter size of preorder array";
    cin>>n;
    vector<int>preorder(n);
    for(int i=0;i<n;i++){
        cout<<"enter element in preorder";
        cin>>preorder[i];
    }
    vector<int>inorder=preorder;
    sort(inorder.begin(),inorder.end());
    unordered_map<int,int>inmap;
    for(int i=0;i<n;i++){
        inmap[inorder[i]]=i;
    }
    treenode* root=make(preorder,0,n-1,inorder,0,n-1,inmap);
    print(root);

    return 0;
}