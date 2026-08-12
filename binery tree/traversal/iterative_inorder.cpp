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
    cout<<"enter root node";
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
    treenode* root=create();
    vector<int>ans;
    stack<treenode*>s;
    treenode* node=root;
    while(true){
        if(node !=NULL){
            s.push(node);
            node=node->left;
        }
        else{
            if(s.empty())break;
            treenode* temp=s.top();
            s.pop();
            ans.push_back(temp->data);
            node=temp->right;
        }
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
    stack<treenode*>st;
    treenode* temp=root;
    while(true){
        if(root!=NULL){
        st.push(root);
        root=root->left;
    }
        else{
            if(st.empty())break;
            treenode* temp=st.top();
            st.pop();
            ans.push_back(temp->data);
            root=temp->right;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    return 0;
}