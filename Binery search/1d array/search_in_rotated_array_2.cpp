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
    int target;
    cout<<"enter key for find";
    cin>>target;

    bool ans=false;

    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==target){
            ans=true;
            break;
        }
        else if(arr[low]==arr[mid]&&arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }

        else if(arr[mid]>=arr[low]){
            if(arr[low]<=target && arr[mid]> target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[high]>=target && arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }

    cout<<ans;

    return 0;
}

*/

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

    int key;
    cout<<"enter key";
    cin>>key;

    int l=0;
    int r=n-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]==key){
            cout<<"true";
            return 0;
        }

        else if(arr[l]==arr[mid] && arr[r]==arr[mid]){
            l++;
            r--;
        }

        else if(arr[mid]>=arr[l]){
            if(arr[l]<=key && arr[mid]>key ){
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        else{
            if(arr[r]>=key && arr[mid]<key){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
    }

    cout<<"false";

    return 0;
}