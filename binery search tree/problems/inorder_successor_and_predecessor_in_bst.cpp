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
treenode* createtree(){
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
void find(treenode* root,int key,int &suc,int &pre){
    if(root==NULL){
        return;
    }
    if(root->data<key){
        suc=max(suc,root->data);
    }
    if(root->data>key){
        pre=max(pre,root->data);
    }
    find(root->left,key,suc,pre);
    find(root->right,key,suc,pre);
}
int main(){
    treenode* root=createtree();  
    int key;
    cout<<"enter key";
    cin>>key;
    int suc=-1;
    int pre=-1;
    find(root,key,suc,pre);
    cout<<"successor is ->"<<suc<<endl;
    cout<<"predecessor is ->"<<pre<<endl;

    return 0;
}