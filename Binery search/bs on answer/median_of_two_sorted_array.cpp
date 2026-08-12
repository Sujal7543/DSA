// brute force;
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of first array(note = while filling elements in array enter element in sorted form) =";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }

    int m;
    cout<<"enter size of second array(note = while filling elements in array enter element in sorted form) =";
    cin>>m;

    int arr2[m];

    for(int i=0;i<m;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr2[i];
    }

    int l=0;
    int r=0;
    vector<int>v;

    while(l<n && r<m){
        if(arr[l]<arr2[r]){
            v.push_back(arr[l]);
            l++;
        }
        else{
            v.push_back(arr2[r]);
            r++;
        }
    }

    while(l<n){
        v.push_back(arr[l]);
        l++;
    }

    while(r<m){
        v.push_back(arr2[r]);
        r++;
    }

    int ans=0;

    if(v.size()%2==1){
        int a=v.size()/2;
         ans=v[a];
    }
    else{
        int a=v.size()/2;
        int b=a-1;
         ans=(v[a]+v[b])/2;
    }

    cout<<ans;

    return 0;
}*/

// better (without space complexity)

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of first array(note = while filling elements in array enter element in sorted form) =";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }

    int m;
    cout<<"enter size of second array(note = while filling elements in array enter element in sorted form) =";
    cin>>m;

    int arr2[m];

    for(int i=0;i<m;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr2[i];
    }

    int l=0;
    int r=0;
    int count=0;

    int el1;
    int el2;
    int total=n+m;
    int a=total/2-1;
    int b=total/2;


    while(l<n && r<m){
        if(arr[l]<arr2[r]){
            if(count==a){
                el1=arr[l];
            }
            else if(count==b){
                el2=arr[l];
            }
            l++;
            count++;
        }
        else{
            if(count==a){
                el1=arr2[r];
            }
            else if(count==b){
                el2=arr2[r];
            }
             count++;
            r++;
            }
        }
    

    while(l<n){   
        if(count==a){
        el1=arr[l];
        }
        else if(count==b){
            el2=arr[l];
        }
         count++; 
l++;
    }

    while(r<m){
        if(count==a){
        el1=arr2[r];
        }
       else if(count==b){
        el2=arr2[r];
       }   
        count++; 
        r++;
    }

    int ans=0;

    if(total%2==1){
        cout<<el2;
    }
    else{
        cout<<(double)(el1+el2)/2;
    }

    return 0;
}*/

//optimal;
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"enter size of frist array ";
    cin>>n1;

    int nums1[n1];

    for(int i=0;i<n1;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>nums1[i];
    }

    int n2;
    cout<<"enter size of array ";
    cin>>n2;

    int nums2[n2];

    for(int i=0;i<n2;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>nums2[i];
    }

    int low=0;
    int high=n1;
    
    double ans=0;
    while(low<=high){
        int cut1=(low+high)/2;
        int cut2=(n1+n2+1)/2-cut1;

        int l1;
        int l2;
        int r1;
        int r2;
       
        l1=cut1==0 ? INT_MIN : nums1[cut1-1];
        l2=cut2==0 ? INT_MIN : nums1[cut2-1];
        r1=cut1==n1 ? INT_MAX : nums1[cut1];
        r2=cut1==n2 ? INT_MAX : nums1[cut2];

        if(l1<=r2 && l2<=r1){
            if((n1+n2)%2==1){
                ans=max(l1,l2);
                break;
            }
            else{
                ans= (double)(max(l1,l2)+min(r1,r2))/2;
                break;
            }
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
    cout<<"enter size of array 1=";
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

    if(n>m){
        swap(n,m);
        swap(a,b);
    }
    
    int low=0;
    int high=n;

    int ans=-1;

    while(low<=high){
        int cut1=(low+high)/2;
        int cut2=(((n+m)+1)/2)-cut1;

        int l1=cut1==0?INT_MIN:arr1[cut1-1];
        int l2=cut2==0?INT_MIN:arr2[cut2-1];
        int r1=cut1==n?INT_MAX:arr1[cut1];
        int r2=cut2==m?INT_MAX:arr2[cut2];

        if(l1<=r2 && l2<=r1){
            if((n+m)%2==0){
                ans=(max(l1,l2)+min(r1,r2))/2;
                break;
            }
            else{
                ans=max(l1,l2);
                break;
            }
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