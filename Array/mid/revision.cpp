/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int target;
    cout<<"enter target";
    cin>>target;

    unordered_map<int,int>mp;

    for(int i=0;i<n;i++){
        int x=target-arr[i];

        if(mp.find(x)!=mp.end()){
            cout<<"i="<<mp[x]<<"j="<<i;
            break;
        }
        mp[arr[i]]=i;
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

        int arr[n];

        for(int i=0;i<n;i++){
            cout<<"enter element "<<i+1<<"=";
            cin>>arr[i];
        }

        int low=0;
        int mid=0;
        int high=n-1;

        while(mid<high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<",";
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

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int el;
    int count=0;

    for(int i=0;i<n;i++){
        if(count==0){
            el=arr[i];
            count=1;
        }
        else if(el==arr[i]){
            count++;
        }
        else {
            count--;
        }
    }

    int count2=0;
    for(int i=0;i<n;i++){
        if(el==arr[i]){
            count2++;
        }

    }
    if(count2>n/2){
        cout<<"majority element = "<<el;
    }
    else{
        cout<<"there is no majority element";
    }

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int sum=0;
    int maxi=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum>maxi){
            maxi=sum;
        }

        else if(sum<0){
            sum=0;
        }
    }

    cout<<"maximum sum of subarray is ="<<maxi;

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<" ";
        cin>>arr[i];
    }
  
    int sum=0;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        sum+=arr[i];

        maxi=max(maxi,sum);

        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;

    return 0;
}*/
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

    int mp=0;
    int day=arr[0];

    for(int i=0;i<n;i++){
        int cost=arr[i]-day;
        mp=max(cost,mp);

        day=min(day,arr[i]);

    }
 cout<<mp;
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }
    
    vector<int>pos;
    vector<int>neg;

    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

    for(int i=0;i<pos.size();i++){
        cout<<pos[i]<<","<<neg[i]<<",";
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

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int v[n];

    int p=0;
    int o=1;

    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            v[p]=arr[i];
            p+=2;
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
            cin>>arr[i];
        }
       
        int ind=-1;

        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                ind=i;
                break;
            }
        }

        if(ind==-1){
            reverse(arr,arr+n);
        }

        else if(ind!=-1){
        for(int i=n-1;i>ind;i--){
            if(arr[i]>arr[ind]){
                swap(arr[i],arr[ind]);
                break;
            }
        }
        reverse(arr+ind+1,arr+n);
    }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<",";
        }

        return 0;
    }
        */

        /*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter sie of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    int maxi=arr[n-1];
    v.push_back(maxi);


    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
            v.push_back(maxi);
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
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

        int arr[n];

        for(int i=0;i<n;i++){
            cout<<"enter element"<<i+1<<"=";
            cin>>arr[i];
        }

        int maxi=1;

        unordered_set<int>st;

        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }

        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int count=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    count++;
                    x=x+1;
                }
                maxi=max(maxi,count);
            }
        }

        cout<<"longest consecutive sequence is = "<<maxi;


        return 0;
    }
        */

        /*
       #include<bits/stdc++.h>
       using namespace std;
       int main(){
        int matrix[3][4]={
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
        };
        int m=3;
        int n=4;

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                for(int j=0;j<n;j++){
                    if(matrix[i][j]!=0){
                    matrix[i][j]=-1;
                }}
                for(int i=0;i<m;i++){
                    if(matrix[i][j]!=0){
                    matrix[i][j]=-1;
                }}
            }
        }
      }

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
      }

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
      }


        return 0;
       }*/

       /*
         #include<bits/stdc++.h>
       using namespace std;
       int main(){
        int matrix[3][4]={
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
        };
        int m=3;
        int n=4;

        int row[m]={0};
        int col[n]={0};

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]==1||col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
      

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
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
        int matrix[3][4]={
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
        };
        int m=3;
        int n=4;

        int col0=1;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;

                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0||matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }

            for(int j=0;j<n;j++){
                if(matrix[0][0]==0){
                    matrix[0][j]=0;
                }
            }
        

        for(int i=0;i<m;i++){
                if(col0==0){
                    matrix[i][0]=0;
                }
            
        }
      

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
      }


        return 0;
       }*/
    
       /*
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int matrix[4][4]={
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16}
    };

    int n=4;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        int b=n-1;
        for(int j=0;j<n/2;j++){
            swap(matrix[i][j],matrix[i][b]);
            b--;
            }
        }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
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
        int matrix[3][4]={
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
        };
        vector<int>v;
        int m=3;
        int n=4;

        int low=0;
        int left=0;
        int right=n-1;
        int high=m-1;

        while(left<=right && low<=high){
            for(int i=left;i<=right;i++){
                v.push_back(matrix[low][i]);
            }
            low++;

            for(int i=low;i<=high;i++){
                v.push_back(matrix[i][right]);
            }
            right--;
            if(low<=high){

            for(int i=right;i>=left;i--){
                v.push_back(matrix[high][i]);
            }
            high--;
        }

            if(left<=right){
            for(int i=high;i>=low;i--){
                v.push_back(matrix[i][left]);
            }
            left++;
        }

    }

    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1){
            cout<<",";
        }
    }
        
        
        return 0;
    }*/

    /*
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cout<<"enter size of array";
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){
            cout<<"enter element"<<i+1<<"=";
            cin>>arr[i];
        }

        unordered_map<int,int>mp;

        int count=0;

        mp[0]=1;
        int sum=0;
        int k;
        cout<<"enter target";
        cin>>k;

        for(int i=0;i<n;i++){
            sum+=arr[i];
            int x=sum-k;

            if(mp.find(x)!=mp.end()){
                count+=mp[x];
            }
                mp[sum]++;
            
        }
        cout<<count;

        return 0;
    }*/

