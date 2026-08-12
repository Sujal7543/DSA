//brute force
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<vector<int>>st;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int>temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    for(auto x :st){
        cout<<x[0]<<" "<<x[1]<<" "<<x[2];
        cout<<endl;
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

    vector<vector<int>>ans;
    sort(arr,arr+n);

    int target;
    cout<<"enter target";
    cin>>target;

    for(int i=0;i<n-2;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];

            if(sum==target){
                ans.push_back({arr[i],arr[j],arr[k]});
                while(j<k && arr[j]==arr[j+1]){
                    j++;
                }
                while(j<k && arr[k]==arr[k-1]){
                    k--;
                }
                j++;
                k--;
            }
            else if(sum<target){
                j++;
            }
            else{
                k--;
            }
        }
    }

    for(auto it:ans){
        cout<<it[0]<<it[1]<<it[2]<<endl;
    }


    return 0;
}