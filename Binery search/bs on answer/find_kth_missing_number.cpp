/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array (enter element sorted in array)";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }

    int k;
    cout<<"enter which th element you want to find =";
    cin>>k;
    int a=k;

    for(int i=0;i<n;i++){
        if(arr[i]<k){
            k++;
        }
        else{
            break;
        }
    }

    cout<<a<<"th missing element is ="<<k;


    return 0;
}*/
    /*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array(enter elements in sorted form)";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }

    int k;
    cout<<"enter which th missing element you want to find";
    cin>>k;

    int low=0;
    int high=n-1;
    while(low<=high){

        int mid=(low+high)/2;
        int missing=arr[mid]-(mid+1);

        if(missing<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      
    }

    cout<<low+k;



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

    int k;
    cout<<"enter k";
    cin>>k;

    int low=0;
    int high=n-1;

    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;

        int missing=arr[mid]-(mid+1);
        if(missing<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<low+k;
    return 0;
}