/*
by using stack ;

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
    int x;
    cout<<"enter head =";
    cin>>x;
    node* head=new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element =";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* reverse(node* head){
     stack<int> st;
    node* temp=head;
    while(temp){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(!st.empty()){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head;

}
int main(){
    int n;
    cout<<"enter size of ll =";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list is= ";
    print(head);
    cout<<endl;

    cout<<"your reverse linked list is =";
    head=reverse(head);
    print(head);

    return 0;
}
    */
/*
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
    int x;
    cout<<"enter head =";
    cin>>x;
    node* head=new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element =";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* reverse(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node* nhead=reverse(head->next);
    node* front=head->next;
    front->next=head;
    head->next=NULL;
    return nhead;
}
int main(){
    int n;
    cout<<"enter size of ll =";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list is= ";
    print(head);
    cout<<endl;

    cout<<"your reverse linked list is =";
    head=reverse(head);
    print(head);

    return 0;
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
    int x;
    cout<<"enter head =";
    cin>>x;
    node* head=new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element =";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

node* rev(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    node* temp=head;
    node* prev=NULL;
    while(temp){
        node* a=temp->next;
        temp->next=prev;
        prev=temp;
        temp=a;
    }
    return prev;
}

int main(){
    int n;
    cout<<"enter size of ll =";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list is= ";
    node* temp=head;

    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }

    cout<<endl<<"after reverse"<<endl;
    head =rev(head);
    temp=head;
     while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}