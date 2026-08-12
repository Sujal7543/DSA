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

    int maxi=0;
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }

    cout<<"maximum element="<<maxi;

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size fo array";
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
        }
        int maxi=INT_MIN;
        int secmaxi=INT_MIN;

        for(int i=0;i<n;i++){
            if(arr[i]>maxi){
                secmaxi=maxi;
                maxi=arr[i];
            }
             else if(arr[i]>secmaxi && arr[i]<maxi){
                secmaxi=arr[i];
            }
        }

        cout<<"second max="<<secmaxi;
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
    bool a=true;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            a=false;
        }
    }
    if(a){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
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
    int s=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=s;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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

    int k;
    cout<<"enter the size of by  k rotation";
    cin>>k;

    k=k%n;

    reverse(arr,arr+k+1);
    reverse(arr+k+1,arr+n);
    reverse(arr,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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

    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else {
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}

    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return 0;
    }
      
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }
    
    int key;
    cout<<"enter number you want to find";
    cin>>key;
    int ans=-1;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
    }
    cout<<"occuring at index "<<ans;


    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }
    
    int m;
    cout<<"enter size of second array";
    cin>>m;
    int arr2[m];

    for(int i=0;i<m;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr2[i];
    }

    
    set<int>v;
    for(int i=0;i<n;i++){
        v.insert(arr[i]);
    }
    for(int i=0;i<m;i++){
        v.insert(arr2[i]);
    }

    for(auto x:v){
        cout<<x<<" ";
        }

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum1+=arr[i];
    }

    for(int i=1;i<=n;i++){
        sum2+=i;
    }

    int missing =sum2-sum1;

    cout<<"missing element="<<missing;

    
  
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int ans=0;
    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        else{
            ans=max(count,ans);
            count=0;
        }
    }
    ans=max(count,ans);
    cout<<"1 repeting maximum time is"<<ans;
  
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }
    int ans=0;

    for(int i=0;i<n;i++){
        ans^=arr[i];
    }

    cout<<ans;
  
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int target;
    cout<<"enter target";
    cin>>target;

    unordered_map<int,int>mp;
    mp[0]=-1;
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        
        int x=sum-target;
        if(mp.find(x)!=mp.end()){
            ans=max(ans,i-mp[x]+1);
        }

        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
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
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int target;
    cout<<"enter target";
    cin>>target;

    int l=0;
    int r=0;
    long long sum=arr[0];
    int maxi=0;
    while(r<n){
        while(sum>target){
            sum-=arr[l];
            l++;
        }
        if(sum==target){
            maxi=max(maxi,r-l+1);
        }
        r++;
        sum+=arr[r];
    }

    cout<<maxi;
    return 0;
}*/
