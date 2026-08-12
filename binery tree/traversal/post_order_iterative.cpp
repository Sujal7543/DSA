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
    cout<<"enter root";
    cin>>x;
    if(x==-1){
        return nullptr;
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
            temp->left= new treenode(l);
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
vector<int>ans;
stack<treenode*>st1;
stack<treenode*>st2;
st1.push(root);

while(!st1.empty()){
    root=st1.top();
    st1.pop();
    st2.push(root);

    if(root->left){
        st1.push(root->left);
    }  
    if(root->right){
        st1.push(root->right);
    }
}
while(!st2.empty()){
    ans.push_back(st2.top()->data);
    st2.pop();
}

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<",";
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
    stack<treenode*>st1;
    stack<treenode*>st2;
    st1.push(root);
    while(!st1.empty()){
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left){
            st1.push(root->left);
        }
        if(root->right){
            st1.push(root->right);
        }
    }
    while(!st2.empty()){
        ans.push_back(st2.top()->data);
        st2.pop();
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    return 0;
}