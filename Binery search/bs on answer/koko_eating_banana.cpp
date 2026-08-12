/*#include<bits/stdc++.h>
using namespace std;
long long find(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

long long koko(int arr[],int k,int n){
    long long h=0;
    for(int i=0;i<n;i++){
h+=ceil((double)arr[i]/k);
    }
    return h;
}

int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }
    int h;
    cout<<"enter hours total limit";
    cin>>h;

    int low=1;
    int high=find(arr,n);

    while(low<=high){
        int k=(low+high)/2;

        int hour=koko(arr,k,n);

        if(hour>h){
            low=k+1;
        }
        else{
            high=k-1;
        }
    }

    cout<<"total number of banana require to eat minimum before hours is "<<low;
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
int find(int arr[],int n){
    int maxi=1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

bool koko(int arr[],int mid,int n,int h){

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%mid==0){
            count+=arr[i]/mid;
        }
        else{
            count+=arr[i]/mid+1;
        }
    }

    if(count<=h){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter no of bananas ";
        cin>>arr[i];
    }

    int h;
    cout<<"Enter total  hours ";
    cin>>h;

    int low=1;
    int high=find(arr,n);

    int ans=0;
    while(low<=high){

        int mid=(low+high)/2;

        if(koko(arr,mid,n,h)==true){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<ans;

    return 0;
}