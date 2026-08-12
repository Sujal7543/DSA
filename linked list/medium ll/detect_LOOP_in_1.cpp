/*brute(using space and o(n)); 
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

    node(int data1){
        data=data1;
        next=NULL;
    }
};
node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head of ll";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter node";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(node* temp){
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
}
bool checkloop(node* temp){
    unordered_map<node*,int>mp;
    while(temp){
        if(mp.find(temp)!=mp.end()){
            return true;
        }
        mp[temp]=1;
        temp=temp->next;
    }
return false;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    node* temp=head;
    print(temp);
    cout<<endl;

    bool a=checkloop(temp);
    if(a){
        cout<<"loop detected";
    }
    else{
        cout<<"no loop";
    }
    
}*/

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

    node(int data1){
        data=data1;
        next=NULL;
    }
};
node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head of ll";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter node";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(node* temp){
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
}
bool checkloop(node* temp){
    node* slow=temp;
    node* fast=temp;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    node* temp=head;
    print(temp);
    cout<<endl;

    bool a=checkloop(temp);
    if(a){
        cout<<"loop detected";
    }
    else{
        cout<<"no loop";
    }
    
}