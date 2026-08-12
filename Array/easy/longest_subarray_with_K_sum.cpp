 /*#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int arr[12]={1,2,3,4,5,1,2,1,1,4,2,3};
    int target=10;
    int lenn=0;
     for(int i=0;i<10;i++){
        int s=0;
        for(int j=i;j<10;j++){
        s+=arr[j];

        if(s==target){
         lenn=max(lenn,j-i+1);
        }
    }
     }
     cout<<lenn;
    return 0;
 }*/

    // fully optimized (not used unordered map cause of collision)
    #include<bits/stdc++.h>
     using namespace std;
     int main(){
     int arr[10]={3,2,1,1,2,1,4,5,1,5};
     int n=10;
     int target=5;
     int sum=0;
     int mlen=0;
     map<int,int>mp;
     for(int i=0;i<n;i++){
        sum+=arr[i];

        if(target==sum){
            mlen=max(mlen,i+1);
        }

        int need=sum-target;
        if(mp.find(need)!=mp.end()){
            int len=i-mp[need];
            mlen=max(len,mlen);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
     }
     cout<<mlen;
        return 0;
     }