
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
    /*
    int ans=0;
    queue<pair<treenode*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        int min=q.front().second;
        int s=q.size();
        int first,last;
        for(int i=0;i<s;i++){
            int curr=q.front().second-min;
            treenode* temp=q.front().first;
            q.pop();
            if(i==0)first=curr;
            if(i==s-1)last=curr;

            if(temp->left)q.push({temp->left,2*curr+1});
            if(temp->right)q.push({temp->right,2*curr+2});
        }
        ans=max(ans,last-first+1);
    }
        */
    int ans=0;
    queue<pair<treenode*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        int s=q.size();
        int first;
        int last;
        int mini=q.front().second;
        for(int i=0;i<s;i++){
            treenode* temp=q.front().first;
            int curr=q.front().second-mini;
            q.pop();
            if(i==0)first=curr;
            if(i==s-1)last=curr;
            if(temp->left){
                q.push({temp->left,2*curr+1});
            }
            if(temp->right){
                q.push({temp->right,2*curr+2});
            }
        }
        ans=max(ans,last-first);
    }

    cout<<"max width ="<<ans;
    return 0;
}