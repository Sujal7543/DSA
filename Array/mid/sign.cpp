/*#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[10]={4,5,2,3,8,-4,-2,-9,8,6};
vector<int> pos,neg;

for(int i=0;i<10;i++){
    if(arr[i]>0){
        pos.push_back(arr[i]);
    }
    else{
        neg.push_back(arr[i]);
    }
}

if(pos.size()>neg.size()){
   for(int i=0;i<neg.size();i++){
    arr[i*2]=pos[i];
    arr[i*2+1]=neg[i];
   }
   int index=neg.size()*2;
   for(int i = neg.size();i<pos.size();i++){
    arr[index]=pos[i];
   }
}
else{
    for(int i=0;i<pos.size();i++){
    arr[i*2]=pos[i];
    arr[i*2+1]=neg[i];
   }
   int index=pos.size()*2;
   for(int i = pos.size();i<neg.size();i++){
    arr[index]=neg[i];
   }
}

for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Etner element";
        cin>>arr[i];
    }

    int e=0;
    int o=1;

    vector<int>v(n);

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            v[e]=arr[i];
            e+=2;
        }
        else{
            v[o]=arr[i];
            o+=2;
        }
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<",";
    }

    return 0;
}
