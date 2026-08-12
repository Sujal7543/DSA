/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cout<<"enter row which row you want to print";
    cin>>r;
    int col;
    cout<<"enter which coloum no you want to print";
    cin>>col;


5*4*3*2*1
    return 0;
}*/

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
}
    */

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v;
    int n;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];

    for(int i =0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum==0){
                vector<int>temp{arr[i],arr[j],arr[k]};
                v.push_back(temp);
                j++;
                k--;
                if(j<k && arr[j]==arr[j-1]){
            continue;
        }
        if(k>j && arr[k]==arr[k+1]){
            continue;
        }
            }
            else if(sum>0){
                k--;
            }
            else{
                j++;
            }
        }
    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}

   

    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    vector<vector<int>>v;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int key;
    cout<<"enter key";
    cin>>key;

    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
              if(j>i+1 && arr[j]==arr[j-1]){
            continue;
        }
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum=arr[i]+arr[j];
                sum+=arr[k];
                sum+=arr[l];
                if(sum==key){
                    vector<int>temp{arr[i],arr[j],arr[k],arr[l]};
                    v.push_back(temp);
                    k++;
                    l--;
                     while(k<l && arr[k]==arr[k-1]){
                    continue;
                }
                while(k<l && arr[l]==arr[l+1]){
                    continue;
                }
                }
                else if(sum<key){
                    k++;
                }
                else{
                    l--;
                }
            }
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0 ;j<v[i].size();j++ ){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }

    int k=0;

    unordered_map<int,int>mp;
    mp[0]=-1;
    int sum=0;
    int maxi=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        int x=sum-k;
        int count=0;
        if(mp.find(x)!=mp.end()){
            count=i-mp[x];
        }
         if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
        maxi=max(maxi,count);
    }

    cout<<maxi;
     

    return 0;
}
*/

/*

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }

    int key;
    cout<<"enter key";
    cin>>key;

    int xr=0;
    int cnt=0;
    unordered_map<int,int>mp;
    mp[xr]++;

    for(int i=0;i<n;i++){
        xr^=arr[i];
        int x=xr^key;
        cnt+=mp[x];
        mp[xr]++;
    }

    cout<<cnt;

    return 0; 
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>intervals{{1,3},{2,6},{8,10},{15,18}};

    vector<vector<int>>ans;

    for(int i=0;i<intervals.size();i++){
        int start=intervals[i][0];
        int end=intervals[i][1];
        if(!ans.empty() && end<=ans.back()[1]){
            continue;
        }
else{
        for(int j=i+1;j<intervals.size();j++){
            if(intervals[j][0]<end){
                end=max(end,intervals[j][1]);
            }
            else{
                break;
            }
        }
          ans.push_back({start , end});
    }
    }

    for(auto it:ans){
        cout<<it[0]<<" "<<it[1]<<"  ";
    }

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int c=0;

void merge(int arr[],int left,int right,int mid){
    int l=left;
    int r=mid+1;
    vector<int>v;

    while(l<=mid && r<=right){
        if(arr[l]<=arr[r]){
            v.push_back(arr[l]);
            l++;
        }
        else{
            v.push_back(arr[r]);
            r++;
            c+=(mid-l+1);
        }
    }

    while(l<=mid){
        v.push_back(arr[l]);
        l++;
    }
    while(r<=right){
        v.push_back(arr[r]);
        r++;
    }

    for(int i=0;i<v.size();i++){
        arr[left+i]=v[i];
    }
}

void mergesort(int arr[],int left,int right){
    if(left==right){
        return;
    }
    int mid=(left+right)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);

    merge(arr,left,right,mid);
}

int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i!=n-1){
            cout<<",";
        }
    }
    cout<<endl;
    cout<<"total inversions = "<<c;

    return 0;
}
    */
