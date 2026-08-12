/*#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"enter the size of array";
  cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cout<<"enter element";
    cin>>arr[i];
 }
 set<int>st;

 for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
for(int i :st){
cout<<i<<" ";
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

    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(auto it:st){
        cout<<it<<" ";
    }

    return 0;
}