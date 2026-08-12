/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans=0;
int arr[11]={1,1,2,2,3,4,4,5,5,6,6};
for(int i=0;i<11;i++){
ans^=arr[i];
}
cout<<ans;
 return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elemewnt";
        cin>>arr[i];
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }

    cout<<ans;

    return 0;
}