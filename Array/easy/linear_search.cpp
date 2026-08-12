/*#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"enter the size of array=";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter element in array=";
    cin>>arr[i];
}
int t;
cout<<"enter target number";
cin>>t;

bool found=false;
for(int i=0;i<n;i++){
    if(arr[i]==t){
        cout<<"target is in this index="<<i;
        found=true;
        break;
    }
}
if(found==false){
    cout<<"not found";
}
return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array =";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elemewnt";
        cin>>arr[i];
    }

    int index=-1;

    int key;
    cout<<"ente key";
    cin>>key ;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
    }
    cout<<index;

    return 0;
}