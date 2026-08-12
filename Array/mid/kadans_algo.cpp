// kadans algorithm

//brute force
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[8]={-2,-3,4,-1,-2,1,5,-3};
int n=8;
int maxd=INT_MIN;
for(int i=0;i<n;i++){
int sum=0;
for(int j=i;j<n;j++){
    sum+=arr[j];
    maxd=max(maxd,sum);
    
}
}

cout<<maxd;
    return 0;
}
    */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    int sum=0;
    int ans=arr[0];

    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(ans<sum){
            ans=sum;
        }
        else if(sum<0){
            sum=0;
        }
    }

    cout<<ans;

    return 0;
}