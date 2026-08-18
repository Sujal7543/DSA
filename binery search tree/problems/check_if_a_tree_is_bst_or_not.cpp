#include<bits/stdc++.h>
using namespace std;
bool flag=true;
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
bool check(treenode* root,long long ll,long long rr){
    if(root==NULL){
        return true;
    }
    if(root->data<ll || root->data>rr){
        flag=false;
    }
    if(flag==false)return false;
    check(root->left,ll,root->data);
    if(flag==false)return false;
    check(root->right,root->data,rr);
    if(flag==false)return false;

    return true;
}
int main(){
    treenode* root=create();  
    long long ll=LLONG_MIN;
    long long rr=LLONG_MAX;
    bool a=check(root,ll,rr);
    if(a){
        cout<<"tree is BST";
    }
    else{
        cout<<"tree is not BST";
    }
    return 0;
}