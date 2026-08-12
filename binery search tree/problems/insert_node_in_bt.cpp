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
        treenode* temp=q.front();q.pop();
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
    int val;
    cout<<"enter value to insert";
    cin>>val;
    print(root);
    cout<<endl;
    treenode* curr=root;
    while(curr!=NULL){
        if(curr->data>val){
            if(curr->left!=NULL){
                curr=curr->left;
            }
            else{
                treenode* a=new treenode(val);
                curr->left=a;
                break;
            }
        }
        else{
            if(curr->right!=NULL){
                curr=curr->right;
            }
            else{
                curr->right=new treenode(val);
                break;
            }
        }
    }
    print(root);
    return 0;
}