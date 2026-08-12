//o(n^2) maked by me

/*#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[6]={10,22,12,3,0,6};
int n=6;
vector<int> v;
for(int i=0;i<n;i++){
    int c=0;
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
        c++;
    }
    if(c==n-i-1){
        v.push_back(arr[i]);
    }
}
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<",";
}
cout<<arr[n-1];
    return 0;
}*/

//o(n^2) maked by me

//o(n) maked by me
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[6]={10,22,12,3,0,6};
int n=6;
vector<int> v;
int max=INT_MIN;
for(int i=n-1;i>=0;i--){
if(arr[i]>max){
    v.push_back(arr[i]);
    max=arr[i];
}
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<",";
}
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter element";
        cin>>arr[i];
    }

    vector<int>ans;

    int maxi=arr[n-1];
    ans.push_back(maxi);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
            ans.push_back(maxi);
        }
    }

    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }

    return 0;
}