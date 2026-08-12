
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
int findl(treenode* root){
    int count=0;
    while(root){
        count++;
        root=root->left;
        }
        return count;
}
int findr(treenode* root){
    int count=0;
    while(root){
        count++;
        root=root->right;
    }
    return count;
}
int find(treenode* root){
    if(root==NULL){
        return 0;
    }
    int left=findl(root);
    int right=findr(root);
    if(left==right){return(1<<left)-1;}

    return 1+find(root->left)+find(root->right);
}
int main(){
    treenode* root=create();
    int ans=0;
    ans=find(root);
    cout<<ans;
    
    return 0;
}
