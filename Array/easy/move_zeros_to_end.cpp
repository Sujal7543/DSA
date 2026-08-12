/*#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    int l=0;
    int x=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0 && x==0){
            l=i;
            x=1;
        }
        else if(arr[i]!=0 && x==1){
            swap(arr[i],arr[l]);
            l++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}