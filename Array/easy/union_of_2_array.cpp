/*#include<bits/stdc++.h>
using namespace std;
int main(){
int arr1[5]={1,2,4,5,6};
int arr2[5]={4,5,6,7,8};

set<int>st;

for(int i=0;i< sizeof(arr1)/4;i++){
    st.insert(arr1[i]);
}
for(int i=0;i<sizeof(arr2)/4;i++){
    st.insert(arr2[i]);
}

for(int i:st){
    cout<<i<<" ";
}
    
//two pointer is better choice is array is sorted

return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"size of first array=";
    cin>>n;

    int arr1[n];

    int m;
    cout<<"enter size of second arraqy =";
    cin>>m;
    int arr2[m];

    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr1[i];
    }

    for(int i=0;i<m;i++){
        cout<<"ente element";
        cin>>arr2[i];
    }

    vector<int>v;

    int i=0;
    int j=0;

    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            v.push_back(arr1[i++]);
            j++;
        }
        else if(arr1[i]<arr2[j]){
            v.push_back(arr1[i++]);
        }
        else{
            v.push_back(arr2[j++]);
        }
    }

    while(i<n){
        v.push_back(arr1[i++]);
    }

    while(j<m){
        v.push_back(arr2[j++]);
    }


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    }
    return 0;
}