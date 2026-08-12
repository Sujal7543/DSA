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
    cout<<"enter node";
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
int main(){
    treenode* root=create();
    vector<int>v;
    treenode* curr=root;
    while(curr!=NULL){
        if(curr->left==NULL){
            v.push_back(curr->data);
            curr=curr->right;
            }
            else{
                treenode* prev=curr->left;
                while(prev->right && prev->right!=curr){
                    prev=prev->right;
                }
                if(prev->right==NULL){
                    prev->right=curr;
                    curr=curr->left;
                }
                else{
                    prev->right=NULL;
                    v.push_back(curr->data);
                    curr=curr->right;
                }
            }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
        }
    return 0;
}