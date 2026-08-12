// all nodes are diff, and p and q will be in tree
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
int find(treenode* root,int p, int q){
    if(root==NULL){
        return 0;
    }
    if( root->data==p||root->data==q){
        return root->data;
    }
    int left=find(root->left,p,q);
    int right=find(root->right,p,q);

    if(left==0){
        return right;
    }
    if(right==0){
        return left;
    }
    if(left && right ){
        return root->data;
    }
    return root->data;
    }

int main(){
    treenode* root=create();
    int p;
    int q;
    cout<<"enter p value";
    cin>>p;
    cout<<"enter q value";
    cin>>q;

    int temp=find(root,p,q);
    cout<<temp;
    return 0;
}