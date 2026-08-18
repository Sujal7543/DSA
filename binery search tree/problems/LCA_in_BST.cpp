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
void find(treenode* root,int pv,int qv,treenode* &p,treenode* &q){
    if(root==NULL){
        return;
    }
    if(root->data==pv){
        p=root;
    }
    if(root->data==qv){
        q=root;
    }
    find(root->left,pv,qv,p,q);
    find(root->right,pv,qv,p,q);
}
treenode* find(treenode* root,treenode* p,treenode*q){
    if(root==NULL){
        return NULL;
    }
    if(root->data<p->data && root->data<q->data){
        return find(root->right,p,q);
    }
    else if(root->data>p->data && root->data>q->data){
        return find(root->left,p,q);
    }
    else{
        return root;
    }
}
int main(){
    treenode* root=create();
    treenode* p;
    treenode* q;
    int pv;
    cout<<"enter p";
    cin>>pv;
    int qv;
    cout<<"enter q";
    cin>>qv;
    find(root,pv,qv,p,q);

    treenode* anc=find(root,p,q);
    cout<<anc->data;
    return 0;
}