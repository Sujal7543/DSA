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
    treenode* root=create();
    vector<int>ans;
    stack<treenode*>s;
    s.push(root);
    while(!s.empty()){
        root=s.top();
        s.pop();
        ans.push_back(root->data);
        if(root->right){
            s.push(root->right);
        }
        if(root->left){
            s.push(root->left);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }

    return 0;
}
    */
//Coding@7543


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
    st.push(root);
    while(!st.empty()){
        treenode* temp=st.top();
        st.pop();
        ans.push_back(temp->data);
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    return 0;
}