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
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        int temp=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=temp;
        break;
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

    int l=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=l;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}