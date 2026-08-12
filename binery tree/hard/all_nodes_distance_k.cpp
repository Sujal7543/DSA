// imp concept of making tree to undirected graph 
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
    cout<<"enter root =";
    cin>>x;
    if(x==-1){
        return NULL;
    }
    treenode* root=new treenode(x);
    queue<treenode*>q;
    q.push(root);
    while(!q.empty()){
        treenode* temp=q.front();q.pop();
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
void parents(treenode* root,unordered_map<treenode*,treenode*>&parent){
    queue<treenode*>q;
    q.push(root);
    while(!q.empty()){
        treenode* temp=q.front();q.pop();
        if(temp->left){
            parent[temp->left]=temp;
        }
        if(temp->right){
            parent[temp->right]=temp;
        }
    }
}
int main(){
treenode* root=buildtree();
int k;
cout<<"enter dist";
cin>>k;
int t;
cout<<"enter target value";
cin>>t;
treenode* target=find(root,t);
unordered_map<treenode*,treenode*>parent;
parents(root,parent);
unordered_map<treenode*,bool>visited;
queue<treenode*>q;
q.push(target);
visited[target]=true;
int level=0;
while(!q.empty()){
    int s=q.size();
    if(level++==k)break;
    for(int i=0;i<s;i++){
        treenode* temp=q.front();q.pop();
        if(temp->left && !visited[temp->left]){
            q.push(temp->left);
            visited[temp->left]=true;
        }
        if(temp->right && !visited[temp->right]){
            q.push(temp->right);
            visited[temp->right]=true;
        }
        if(parent[temp]&& !visited[parent[temp]]){
            q.push(parent[temp]);
            visited[parent[temp]]=true;
        }
    }
}
vector<int>ans;
while(!q.empty()){
    ans.push_back(q.front()->data);
    q.pop();
}

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<",";
}
    return 0;
}