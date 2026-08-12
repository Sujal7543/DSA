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
void print(treenode* root){
    if(root==NULL){
        return ;
    }
    print(root->left);
    cout<<root->data;
    print(root->right);
}
void findthisshit(treenode* root,int k,int &ans,int &count){
    if(root==NULL){
        return ;
    }
    findthisshit(root->left,k,ans,count);
    count+=1;
    if(count==k){
        ans=root->data;
        return;
    }
    findthisshit(root->right,k,ans,count);
}
int main(){
treenode* root=createtree();
print(root);
cout<<endl;
int k;
cout<<"enter which th smallest value you want";
cin>>k;
int count=0;
int ans=-1;
findthisshit(root,k,ans,count);
cout<<endl<<"kth smallest value is="<<ans;
    return 0;
}