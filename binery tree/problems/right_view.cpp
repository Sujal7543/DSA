
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
int main(){
    treenode* root=create();
    vector<int>ans;
    if(root==NULL){
        cout<<"[]";
        return 0;
    }
    queue<treenode*>q;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
            treenode* temp=q.front();
            q.pop();
            if(i==s-1){
                ans.push_back(temp->data);
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
                        }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    return 0;
}