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

    int m;
    cout<<"how many bouqets of flower you wan to make =";
    cin>>m;

    int k;
    cout<<"enter how many flower you want in bouqit and there adjecency range";
    cin>>k;

    if(m*k>n){
        cout<<"-1";
    }
    else{
    int low=*min_element(arr,arr+n);
    int high=*max_element(arr,arr+n);

    while(low<=high){
        int day=(low+high)/2;
        int flower=0;
        int bouqits=0;

        for(int i=0;i<n;i++){
            if(arr[i]<=day){
                flower++;
                if(flower==k){
                    bouqits++;
                    flower=0;
                }
            }
            else{
                    flower=0;
                }
        }

        if(bouqits>=m){
            high=day-1;
        }
        else{
            low=day+1;
        }
        }
cout<<"minimum days for making boukits ="<<low;
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int bloomday[n];

    for(int i=0;i<n;i++){
        cout<<"enter blooming day of a flower";
        cin>>bloomday[i];
    }

    int m;
    cout<<"enter no of bouqits to make";
    cin>>m;

    int k;
    cout<<"enter flowers in bouqit";
    cin>>k;

    if(n<m*k){
        cout<<"not possible";
        return 0;
    }
    int low=1;
    int high=0;
    for(int i=0;i<n;i++){
        high=max(bloomday[i],high);
    }
    int ans=0;

    while(low<=high){
        int mid=(low+high)/2;
        int count=0;
        int bouqits=0;

        for(int i=0;i<n;i++){
            if(bloomday[i]<=mid){
                count++;
                if(count==k){
                    bouqits++;
                }
            }
            else{
                    count=0;
                }
        }

        if(bouqits>=m){
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