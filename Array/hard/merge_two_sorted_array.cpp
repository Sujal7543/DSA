#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array +array2 ";
    cin>>n;

    int m;
    cout<<"size of second array";
    cin>>m;

    int arr1[n];
    int arr2[m];

    for(int i=0;i<n;i++){
        if(i<n-m){
        cout<<"enter element";
        cin>>arr1[i];
        }
        else{
            arr1[i]=0;
        }
    }

    for(int i=0;i<m;i++){
        cout<<"enter element";
        cin>>arr2[i];
    }

    int i=n-m-1;
    int j=m-1;

    int pos=n-1;
    while(i>=0 && j>=0){
        if(arr1[i]<arr2[j]){
            arr1[pos--]=arr2[j];
        j--;
        }
        else{
            arr1[pos--]=arr1[i];
        i--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr1[i]<<",";
    }





    return 0;
}