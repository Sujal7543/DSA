#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ente size of array ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    int maxprofit=0;
    int buy=arr[0];

    for(int i=1;i<n;i++){
        int profit=arr[i]-buy;

        if(profit>maxprofit){
            maxprofit=profit;
        }

        buy=min(buy,arr[i]);
    }

    cout<<maxprofit;

    return 0;
}