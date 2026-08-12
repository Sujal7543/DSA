/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array=";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element = ";
        cin>>arr[i];
    }
int d;
cout<<"enter target";
cin>>d;

d=d%n;
int temp[d];

for(int i=0;i<d;i++){
    temp[i]=arr[i];
}

for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
}
int j=0;
for(int i=n-d;i<n;i++){
    arr[i]=temp[j];
    j++;
}

for(int i=0;i<n;i++){
    cout<<arr[i];
}

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
        cout<<"enter element";
        cin>>arr[i];
    }

    int k;
    cout<<"enter k";
    cin>>k;

    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 1;
}