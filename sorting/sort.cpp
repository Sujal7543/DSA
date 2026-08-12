/*include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[mini]){
                mini=j;
            }
                int temp=arr[mini];
                arr[mini]=arr[i];
                arr[i]=temp;
        }
    }
}
int main(){
int n;
cout<<"enter the size of array";
cin>>n;
int arr[n];
cout<<"enter element in array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
selection_sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=n-1;i>=1;i--)
    for(int j=0;j<=i;j++){
        if(arr[j]>arr[j+1]){
            int temp =arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }

    }
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}