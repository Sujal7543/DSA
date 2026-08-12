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
treenode* buildtree(){
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
         if(l!=-1){
            temp->left=new treenode(l);
            q.push(temp->left);
        }
        cout<<"enter right node";
        cin>>r;
        if(r!=-1){
            temp->right=new treenode(r);
            q.push(temp->right);
        }
    }
return root;
}
void bfs(treenode* root,vector<int>&v){
    queue<treenode*>q;
    q.push(root);
    while(!q.empty()){
        treenode* temp=q.front();
        q.pop();
        v.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
int main(){
    treenode* root=buildtree();
    vector<int>v;
    bfs(root,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    }
    return 0;
}*/


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
    queue<treenode*>q;
    q.push(root);
    while(!q.empty()){
        treenode* temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    return 0;
}