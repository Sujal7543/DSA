/*#include<bits/stdc++.h>
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
void pre(treenode* root,vector<int>&ans){
    if(root ==NULL){
        return ;
    }
    ans.push_back(root->data);
    pre(root->left,ans);
    pre(root->right,ans);
}
int main(){
    treenode* root=create();
    vector<int>ans;
    pre(root,ans);


    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    return 0;
}
    */



