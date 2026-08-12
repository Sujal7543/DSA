/*
#include<bits/stdc++.h>
using namespace std;
bool finddist(int arr[],int dist , int cow,int n ){
    int prev=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]-prev>=dist){
            prev=arr[i];
            count++;
        }
    }
    if(count>=cow){
        return true;
    }
    else{
        return false;
    }
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

    sort(arr,arr+n);

    int cows;
    cout<<"enter size of cows";
    cin>>cows;

    int low=1;
    int high=arr[n-1]-arr[0];

    while(low<=high){
        int dist=(low+high)/2;

        if(finddist(arr,dist,cows,n)==true){
            low=dist+1;
        }
        else{
            high=dist-1;
        }
    }
    cout<<high;


    return 0;
}
    */
/*
#include<bits/stdc++.h>
using namespace std;
bool finddist(int arr[],int dist,int cow,int n){
    int prev=arr[0];
    int count=1;

    for(int i=1;i<n;i++){
        if(arr[i]-prev>=dist){
            count++;
            prev=arr[i];
        }
    }
    if(count>=cow){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"entert element "<<i+1<<"=";
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int cow;
    cout<<"enter cows =";
    cin>>cow;

    int low=0;
    int high=arr[n-1]-0;

    while(low<=high){
        int dist=(low+high)/2;

        if(finddist(arr,dist,cow,n)==true){
            low=dist+1;
        }
        else{
            high=dist-1;
        }
    }

    cout<<"maximumly we can put cows in stable with maximum of minimum distance is ="<<high;

    return 0;
}
    */

    #include<bits/stdc++.h>
    using namespace std;
      int find(int arr[],int mid,int n){
        int dist=arr[0];
        int count=1;

        for(int i=1;i<n;i++){
            if(arr[i]-dist>=mid){
                count++;
                dist=arr[i];
            }
        }

        return count;

    }
    int main(){
        int n;
        cout<<"enter size of array";
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){
            cout<<"enter element";
            cin>>arr[i];
        }

        int cows;
        cout<<"enter no of cows";
        cin>>cows;

        int ans=0;
        sort(arr,arr+n);

        int low=1;
        int high=arr[n-1]-arr[0];

        while(low<=high){
            int mid=(low+high)/2;

            int x=find(arr,mid,n);

            if(x<cows){
                high=mid-1;
            }
            else{
                ans=mid;
                low=mid+1;
            }
        }
        cout<<ans;

        return 0;
    }