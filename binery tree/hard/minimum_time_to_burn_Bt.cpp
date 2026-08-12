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
void parents(treenode* root,unordered_map<treenode*,treenode*>&parent){
    queue<treenode*>q;
    q.push(root);
    while(!q.empty()){
        treenode* temp=q.front();q.pop();
        if(temp->left){
            parent[temp->left]=temp;
            q.push(temp->left);
        }
        if(temp->right){
            parent[temp->right]=temp;
            q.push(temp->right);
        }
    }
}
treenode* find(treenode* root,int t){
    if(root==NULL){
        return NULL;
    }
    if(root->data==t){
        return root;
    }
    treenode* left=find(root->left,t);
    if(left!=NULL){
        return left;
    }
    return find(root->right,t);
}
int main(){
treenode* root=createtree();
unordered_map<treenode*,treenode*>parent;
parents(root,parent);
int t;
cout<<"enter target";
cin>>t;
treenode* target=find(root,t);
if(target ==NULL){
    cout<<"tree has not setted fire";
    return 0;
}
int s=0;
queue<treenode*>q;
q.push(target);
unordered_map<treenode*,bool>visited;
visited[target]=true;
while(!q.empty()){
    int a=q.size();
    for(int i=0;i<a;i++){
        treenode*temp=q.front();q.pop();
        if(temp->left && !visited[temp->left]){
            q.push(temp->left);
            visited[temp->left]=true;
        }
        if(temp->right && !visited[temp->right]){
            q.push(temp->right);
            visited[temp->right]=true;
        }
        if(parent[temp] && !visited[parent[temp]]){
            q.push(parent[temp]);
            visited[parent[temp]]=true;
        }
    }
    s++;
}
  cout<<"minimum time ="<<s-1;
    return 0;
}