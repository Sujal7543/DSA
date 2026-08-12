//better
//using hash
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=(n/3)+1;
    vector<int>v;
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(mp[arr[i]]==mini){
            v.push_back(arr[i]);
        }
    
    if(v.size()==2){
        break;
    }

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<",";
}

    return 0;
}
*/
//optimal;
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

    int el1=0;
    int el2=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++){
        if(count1==0 && el2!=arr[i]){
            el1=arr[i];
            count1=1;
        }
        else if(count2==0 && el1!=arr[i]){
            el2=arr[i];
            count2=1;
        }
        else if(el1==arr[i]){
            count1++;
        }
        else if(el2==arr[i]){
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }

    int realcount1=0;
    int realcount2=0;
    for(int i=0;i<n;i++){
        if(el1==arr[i]){
            realcount1++;
        }
        else if(el2==arr[i]){
            realcount2++;
        }
    }
    if(realcount1>n/3){
        cout<<el1<<",";
    }
    if(realcount2>n/3){
        cout<<el2;
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
        cout<<"Enter element";
        cin>>arr[i];
    }

    int count1=0;
    int count2=0;
    int el1;
    int el2;

    for(int i=0;i<n;i++){

        if(count1==0 && el2!=arr[i]){
            el1=arr[i];
            count1++;
        }

        else if(count2==0 && el1!=arr[i]){
            el2=arr[i];
            count2++;
        }

        else if(el1==arr[i]){
            count1++;
        }
        else if(el2==arr[i]){
            count2++;
        }

        else{
            count1--;
            count2--;
        }
    }

    int countt1=0;
    int countt2=0;

    for(int i=0;i<n;i++){
        if(el1==arr[i]){
            countt1++;
        }
        else if(el2==arr[i]){
            countt2++;
        }
    }

    if(countt1>n/3){
        cout<<"first element="<<el1;
    }
    if(countt2>n/3){
        cout<<"second element"<<el2;
    }

    return 0;
}