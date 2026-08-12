/*
dlt head ;
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* back;

    node(int data1){
        data=data1;
        back=NULL;
        next=NULL;
    }

    node(int data1 ,node* back1, node* next1){
        data=data1;
        back=back1;
        next=next1;
    }
};

node* create(int n){
    if(n>0){
    int x;
    cout<<"enter head value";
    cin>>x;

    node* head= new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element =";
        cin>>x;
        node*temp =new node(x);
        temp->back=mover;
        mover->next=temp;
        mover=temp;
    }
    return head;
    }
}


void print(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* dlt(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node* temp=head;
    head=head->next;
    head->back=NULL;
    delete temp;

    return head;
}
int main(){
    int n;
    cout<<"enter size of linked list";
    cin>>n;

    node*head =create(n);
    cout<<"your linked list is = ";
    print(head);

    cout<<endl;
    head=dlt(head);

    print(head);

    return 0;
}
************************************************************************************
*/
/*
dlt tail 
**************************************************************************************
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* back;

    node(int data1){
        data=data1;
        next=NULL;
        back=NULL;
    }

    node(int data1 , node* next1, node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
};

node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head =";
    cin>>x;
    node* head=new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element ";
        cin>>x;
        node*temp = new node(x);
        temp->back=mover;
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

node* dlttail(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }

    node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
        }
         node* dlt=temp->next;
            temp->next=nullptr;
            delete dlt;
    return head;
}
int main(){
    int n;
    cout<<"enter size of ll =";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list is =";
    print(head);
    cout<<endl;


    head=dlttail(head);
    cout<<"after dlt tail =";
    print(head);
     

    return 0;
}
    ****************************************************************************************************
*/

/*
************************************************************************************************************
remove kth element 
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node* back;

    node(int data1){
        data=data1;
        back=NULL;
        next=NULL;
    }

    node(int data1 , node* back1, node* next1){
        data=data1;
        back=back1;
        next=next1;
    }
};

node* create(int n){
    if(n==0){
        return NULL;
    }
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
        temp->back=mover;
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

node* dltk(node*head,int pos){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        if(pos==1){
            delete head;
            return NULL;
        }
        else{
            return head;
        }
    }
    if(pos==1){
        node* temp=head;
        head=head->next;
        head->back=NULL;
        delete temp;
        return head;
    }

    node* temp=head;
    int count=1;

    while(count<=pos){
        count++;
        temp=temp->next;
    }
    temp->back->next=temp->next;
    if(temp->next!=NULL){
    temp->next->back=temp->back;
    }
    delete temp;

    return head;

}
int main(){
    int n;
    cout<<"enter size of dll =";
    cin>>n;

    node*head=create(n);
    cout<<"your doubly ll is = ";
    print(head);

    cout<<endl;

    int k;
    cout<<"enter position where you want to delete ";
    cin>>k;

    head=dltk(head,k);
    cout<<"your new ll is = ";
    print(head);
    return 0;
}
****************************************************************************************************
*/

/*
******************************************************************************************
#include<bits/stdc++.h>
using namespace std;
struct node{  
    int data;
    node* next;
    node* back;

    node(int data1){
        data=data1;
        next=NULL;
        back=NULL; 
    }

    node(int data1, node* next1, node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
};

node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head =";
    cin>>x;
    node* head=new node(x);
    node * mover = head;

        for(int i=1;i<n;i++){
            int x;
            cout<<"enter element=";
            cin>>x;
            node* temp=new node(x);
            temp->back=mover;
            mover->next=temp;
            mover=temp;;
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

node* dltv(node* head, int v){
    if(head==NULL){
        return NULL;
    }

    if(head->next==NULL){
        if(head->data==v){
            delete head;
            return NULL ;
        }
        else{
            return head;
        }
    }

    if(head->data==v){
        node* temp= head;
        head=head->next;
        head->back=nullptr;
        delete temp;
        return head;
    }

    node* temp=head;
    while(temp){
        if(temp->data==v){
            temp->back->next=temp->next;
            if(temp->next!=nullptr){
                temp->next->back=temp->back;
            }
             delete temp;
                break;
        }
        temp=temp->next;
    }
    return head;

}

int main(){
    int n;
    cout<<"enter size of ll =";
    cin>>n;

    node* head= create(n);
    cout<<"your linked list is =";
    print(head);

    int value;
    cout<<"enter value =";
    cin>>value;

    head=dltv(head,value);
    cout<<"aster deleting =";
    print(head);

    return 0;
}
**************************************************************************************
*/

