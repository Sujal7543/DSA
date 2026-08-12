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
        cout<<"Enter left node";
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
int main(){
    treenode* root=create();
    vector<int>ans;
    queue<pair<treenode*,int>>q;
    map<int,int>mp;
    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        treenode* node=p.first;
        int x=p.second;
        mp[x]=node->data;

        if(node->left){
            q.push({node->left,x-1});
        }
        if(node->right){
            q.push({node->right,x+1});
        }
    }
    for(auto it:mp){
        ans.push_back(it.second);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    
    return 0;
}