/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }



    int low=0;
    int high=n-1;

    while(low<high){
        int mid=(low+high)/2;

        if(arr[mid]<arr[high]){
            high=mid;
        }
        else if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else{
            high--;
        }
    }
cout<<low;
   
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
    int r=n-1;

    while(l<r){

        int mid=(l+r)/2;

        if(arr[mid]<arr[r]){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    cout<<l;

    return 0;
}