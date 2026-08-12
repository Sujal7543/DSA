
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
    vector<vector<int>>ans;
    queue<pair<treenode*,pair<int,int>>>q;
    map<int,map<int,multiset<int>>>nodes;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        treenode* node=p.first;
        int x=p.second.first;
        int y=p.second.second;
        nodes[x][y].insert(node->data);
        if(node->left){
            q.push({node->left,{x-1,y+1}});
        }
        if(node->right){
            q.push({node->right,{x+1,y+1}});
        }
    }

    for(auto p:nodes){
        vector<int>temp;
        for(auto q: p.second){
            temp.insert(temp.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(temp);
    }

    return 0;
}