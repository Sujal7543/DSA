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
treenode* buildtree(){
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
void paths(treenode* root,vector<int>&temp,vector<vector<int>>&ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        temp.push_back(root->data);
        ans.push_back(temp);
        temp.pop_back();
        return;
    }
    temp.push_back(root->data);
    paths(root->left,temp,ans);
    paths(root->right,temp,ans);
    temp.pop_back();
}
int main(){
    treenode* root=buildtree();
    vector<vector<int>>ans;
    vector<int>temp;
    paths(root,temp,ans);

    for(auto row:ans){
        for(auto it:row){
            cout<<it<<",";
        }
    }

    return 0;
}