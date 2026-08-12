/*
#include<bits/stdc++.h>
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

    int target;
    cout<<"enter target";
    cin>>target;

    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<"answer found at index ="<<ans;

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int key;
    cout<<"enter key";
    cin>>key;

    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>=key){
            ans=arr[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<"lower bond is ="<<ans;
    return 0;
}*/

/*
#include<bits/stdc++.h>
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

    int key;
    cout<<"enter key";
    cin>>key;

    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>key){
            ans=arr[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<"upper bond = "<<ans;

    return 0;
}*/

/*
#include<bits/stdc++.h>
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

    int key;
    cout<<"enter key";
    cin>>key;

    int low=0;
    int high=n-1;
    int ans=0;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]<key){
            ans=mid+1;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<ans;


    return 0;
}
    */

    /*
    #include<bits/stdc++.h>
    using namespace std;

    int floor(int arr[],int n,int key){
        int low=0;
        int high=n-1;
        int ans=-1;

        while(low<=high){
            int mid=(low+high)/2;

            if(arr[mid]<=key){
                ans=arr[mid];
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }

    int ceil(int arr[],int n,int key){
        int low=0;
        int high=n-1;
        int ans=-1;

        while(low<=high){

            int mid=(low+high)/2;

            if(arr[mid]>=key){
                ans=arr[mid];
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
return ans;

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

        int key;
        cout<<"enter key";
        cin>>key;

        int f=floor(arr,n,key);
        int c=ceil(arr,n,key);

        cout<<"flore="<<f;
        cout<<"ceil="<<c;

        return 0;
    }*/

    /*
#include<bits/stdc++.h>
using namespace std;

int firsto(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int lasto(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
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

    int key;
    cout<<"enter key";
    cin>>key;

    int first=firsto(arr,n,key);

    if(first==-1){
        cout<<"there is no occurence of element";
    }
    else{
        int last=lasto(arr,n,key);

        cout<<"first occurence ="<<first<<endl;
        cout<<"last occurence ="<<last<<endl;
    }

    return 0;
}*/

/*
#include<bits/stdc++.h>
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

    int key;
    cout<<"enter key";
    cin>>key;

    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high){

        int mid=(low+high)/2;

        if(arr[mid]==key){
            ans=mid;
            break;
        }
        if(arr[mid]>=arr[low]){
            if(arr[low]<=key && arr[mid]>key){
                high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
        else{
            if(arr[high]>=key && arr[mid]<key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

    }
    cout<<ans;

    return 0;
}*/

/*
#include<bits/stdc++.h>
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

    int key;
    cout<<"enter key";
    cin>>key;

    int low=0;
    int high=n-1;
    bool ans=false;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            ans=true;
            break;
        }

        if(arr[low]==arr[mid] && arr[high]==arr[mid]){
            low++;
            high--;
            continue;
        }

        if(arr[mid]>=arr[low]){
            if(arr[low]<=key && arr[mid]>key){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[high]>=key && arr[mid]<key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }

cout<<ans;
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;

int firsto(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int lasto(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
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

    int key;
    cout<<"ente key";
    cin>>key;

    int first=firsto(arr,n,key);

    if(first==-1){
        cout<<"element no present in array";
    }
    else{
        int last=lasto(arr,n,key);
            int ans=(last-first)+1;
            cout<<"occurence of key ="<<ans;
    }

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size pf array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int low=0;
    int high=n-1;
    int ans=0;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<arr[low];
    return 0;
}
    */

    /*
#include<bits/stdc++.h>
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

     int low=0;
     int high=n-1;

     while(low<high){
        int mid=(low+high)/2;

        if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else{
            high=mid;
        }
     }

     cout<<low;

    return 0;
}*/

/*
#include<bits/stdc++.h>
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

    int low=0;
    int high=n-1;

    while(low<high){
        int mid=(low+high)/2;

        if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    cout<<"peak element ="<<low;

    return 0;
}
    */

    /*
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cout<<"enter size of array";
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

            if(mid%2==1){
                mid--;
            }

            if(arr[mid]!=arr[mid+1]){
                high=mid;
            }
            else{
                low=mid+2;
            }

        }
        cout<<"single element in array is ="<<arr[low];

        return 0;
    }*/

    








