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
treenode* maker(treenode* root){
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
treenode* attacher(treenode* root){
    if(root->left==NULL){
        return root->right ;
    }
    if(root->right==NULL){
        return root->left;
    }
    treenode* right=root->right;
    treenode* leftr=maker(root->left);
    leftr->right=right;
    return root->left;
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
    treenode* root=create();
    print(root);
    cout<<endl;
     int val;
    cout<<"enter value";
    cin>>val;
    cout<<endl;
    if(root->data==val){
        root=attacher(root);
    }
    else{
    treenode* curr=root;
    while(curr){
        if(curr->data>val){
            if(curr->left!=NULL && curr->left->data==val){
                curr->left=attacher(curr->left);
                break;
            }
            else{
            curr=curr->left;
            }
        }
        else{
            if(curr->right!=NULL && curr->right->data==val){
                curr->right=attacher(curr->right);
                break;
            }
            else{
                curr=curr->right;
            }
        }
    }
}
print(root);
    return 0;
}