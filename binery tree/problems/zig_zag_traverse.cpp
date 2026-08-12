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
int main(){
treenode* root=buildtree();
if(root==NULL){
    cout<<"[]";
    return 0;
}
vector<vector<int>>ans;
queue<treenode*>q;
q.push(root);
int odd=0;
while(!q.empty()){
    int size=q.size();
    vector<int>temp(size);
    for(int i=0;i<size;i++){
        treenode* v=q.front();
        q.pop();
        int index;
        if(odd%2==0){
            index=i;
        }
        else{
            index=size-1-i;
        }
        temp[index]=v->data;

        if(v->left)q.push(v->left);
        if(v->right)q.push(v->right);
    }
    ans.push_back(temp);
    odd+=1;
}
cout<<"[";
for(auto row:ans){
    cout<<"[";
    for(int i=0;i<row.size();i++){
        cout<<row[i];
    if(i!=row.size()-1){
        cout<<",";
    }
    else{
        cout<<"]";
    }
}
}
    return 0;
}