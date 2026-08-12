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

    int painters;
    cout<<"enter no of painters";
    cin>>painters;

    int time;
    cout<<"enter time it will take";
    cin>>time;

    if(n<painters){
        painters=n;
    }

    int low=*max_element(arr,arr+n);
    int high=0;
    for(int i=0;i<n;i++){
        high+=arr[i];
    }

    while(low<=high){
        int sum=0;
        int count=0;
        int mid=(low+high)/2;

        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>mid){
                count++;
                sum=arr[i];
            }
            if(i==n-1){
                count++;
            }
        }
            if(count>painters){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    

    int ans=low*time;
    int realans=ans%10000003;

    cout<<realans;


    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"enter size of n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    int a;
    cout<<"enter no of painters";
    cin>>a;

    int b;
    cout<<"enter time taken in a single unit =";
    cin>>b;
int ans=0;
    int low=*max_element(arr,arr+n);
    int high=0;
    for(int i=0;i<n;i++){
        high+=arr[i];
    }

    while(low<=high){
        int mid=(low+high)/2;
        int sum=0;
        int count=1;

        for(int i=0;i<n;i++){
            sum+=arr[i];

            if(sum>mid){
                count++;
                sum=arr[i];
            }
        }

        if(count<=a){
            ans=mid;
            high=mid-1;
        }
        else{
        low=mid+1;
    }
}
ans*=b;
cout<<ans%10000003;
    return 0;
}