
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
int check(treenode* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return root->data;
    }
    int left=check(root->left);
    int right=check(root->right);
    if(left==-1||right==-1){
        return -1;
    }
    if(left+right==root->data){
        return root->data;
    }
    else{
    return -1;
    }

}
int main(){
    treenode* root=create();
    int a=check(root);
    if(a==-1){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}