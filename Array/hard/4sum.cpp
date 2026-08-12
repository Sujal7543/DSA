/*#include<bits/stdc++.h>
using namespace std;
int main(){
    set<vector<int>>st;

    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    cout<<"we have to find now 4 element with sum = 0"<<endl;
    int target;
    cout<<"enter target";
    cin>>target;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int k=j+1;
            int l=n-1;;
            while(k<l){
                long long sum=arr[i]+arr[j];
                sum+=arr[k];
                sum+=arr[l];

                if(sum==target){
                    vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                    k++;
                    l--;
                }
                else if(sum<target){
                    k++;
                }
                else{
                    l--;
                }
            }

        }
    }
    
    for(auto x :st){
                cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<" "<<x[3]<<endl;
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

    int target;
    cout<<"enter targert";
    cin>>target;

    sort(arr,arr+n);

    vector<vector<int>>ans;

    for(int i=0;i<n-3;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        for(int j=i+1;j<n-2;j++){
            if(j>i+1 && arr[j]==arr[j-1] ){
                continue;
            }
            int k=j+1;
            int l=n-1;

            while(k<l){
                int sum=arr[i]+arr[j]+arr[k]+arr[l];

                if(sum==target){
                    ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                    while(k<l && arr[k]==arr[k+1]){
                        k++;
                    }
                    while(k<l && arr[l]==arr[l-1]){
                        l--;
                    }
                    k++;
                    l--;
                }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }

        for(auto it:ans){
            cout<<it[0]<<it[1]<<it[2]<<it[3]<<endl;
        }

    return 0;
}