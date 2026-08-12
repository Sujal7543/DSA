/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"enter size of first array =";
    cin>>n1;
    int nums1[n1];

    for(int i=0;i<n1;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>nums1[i];
    }

    int n2;
    cout<<"enter size of second array";
    cin>>n2;

    int nums2[n2];

    for(int i=0;i<n2;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>nums2[i];
    }

    int k;
    cout<<"enter which th element you want to find =";
    cin>>k;

    int ans=-1;

    int low=max(0,n2-k);
    int high=min(n1,k);

    while(low<=high){
        int cut1=(low+high)/2;
        int cut2=k-cut1;

        int l1=cut1==0 ?INT_MIN:nums1[cut1-1];
        int l2=cut2==0 ?INT_MIN:nums2[cut2-1];
        int r1=cut1==n1 ?INT_MAX:nums1[cut1];
        int r2=cut2==n2 ?INT_MAX:nums2[cut2];

        if(l1<=r2 && l2<=r1){
            ans= max(l1,l1);
            break;
        }

        else if(l1>r2){
            high=cut1-1;
        }
        else{
            low=cut1+1;
        }
    }

    cout<<ans;

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array1 =";
    cin>>n;

    int arr1[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr1[i];
    }

    int m;
    cout<<"enter size of array2 =";
    cin>>m;

    int arr2[m];
    for(int i=0;i<m;i++){
        cout<<"enter element";
        cin>>arr2[i];
    }

    int *a=arr1;
    int *b=arr2;

    if(m>n){
        swap(a,b);
        swap(n,m);
    }

    int k;
    cout<<"enter kth element";
    cin>>k;

    int low=max(0,k-n);
    int high=min(k,n);

    int ans=0;

    while(low<=high){
        int cut1=(low+high)/2;
        int cut2=(k-cut1);

        int l1=cut1==0?INT_MIN:arr1[cut1-1];
        int l2=cut2==0?INT_MIN:arr2[cut2-1];
        int r1=cut1==n?INT_MAX:arr1[cut1];
        int r2=cut1==m?INT_MIN:arr2[cut2];

        if(l1<=r2 && l2<=r1){
            ans=max(l1,l2);
            break;
        }
        else if(l1>r2){
            high=cut1-1;
        }
        else{
            low=cut1+1;
        }
    }

    cout<<ans;

    return 0;
}