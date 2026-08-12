/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,2,2,2,1,2};
    int n=6;
    int ans=0;
    for(int i = 0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
            if(count>n/2){
                ans=arr[i];
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}*/

//better=
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[7]={1,2,1,1,1,4,4};
int n=7;
int ans=0;
unordered_map<int,int>hash;
for(int i=0;i<n;i++){
    hash[arr[i]]++;
}

for(auto it:hash){
    if(it.second>n/2){
        ans=it.first;
    }
}
cout<<ans;
    return 0;
}
    
*/
//most optimal moore's algorithm
  
//optimal

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

    int count=0;
    int el;

    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            el=arr[i];
        }
        else if(el==arr[i]){
            count++;
        }
        else{
            count--;
        }
    }

    int c=0;
    
    for(int i=0;i<n;i++){
        if(el==arr[i]){
            c++;
        }
    }

    if(c>n/2){
        cout<<el;
    }


    return 0;
}