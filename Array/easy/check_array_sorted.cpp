/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter size of array";
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cout<<"enter element in array";
    cin>>arr[i];
}

int c=0;
for(int i=0;i<n;i++){
    if(arr[i]>=arr[i+1]){
        c++;
    }
}

if(c==0){
    cout<<"array is sorted";
}
else{
    cout<<"array is not sorted";
}
    return 0;
}*/

#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element =";
        cin>>arr[i];
    }


    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"not sorted";
            return 0;
        }
    }

    cout<<"sorted";
    return 0;
}