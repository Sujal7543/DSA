/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int pivot=arr[0];
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(mid> 0 &&arr[mid]<arr[mid-1]){
            pivot=arr[mid];
            break;
        }
        else if(arr[mid]<arr[high]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"smallest element in array is ="<<pivot;
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of aray";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    int ans=arr[0];

    int l=0;
    int r=n-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(mid<n-1 && arr[mid]>arr[mid+1] ){
            ans=arr[mid+1];
            break;
        }

        else if(arr[mid]>=arr[l]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

    cout<<ans;

    return 0;
}