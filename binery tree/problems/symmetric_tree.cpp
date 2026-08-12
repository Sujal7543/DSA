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
    cout<<"enter root node";
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
        cout<<"Enter right node";
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
bool check(treenode* root1,treenode* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1->data==root2->data){
        bool a=check(root1->left,root2->right);
        bool b=check(root1->right,root2->left);
        return a&&b;
    }
    return false;
}
int main(){
    treenode* root= create();
    if(root==NULL){
        cout<<"symmetric";
        return 0;
    }
    treenode* root2=root;
    bool a=check(root,root2);
    if(a){
        cout<<"symmetric";
    }
    else{
        cout<<"not symmetric";
    }

    return 0;
}