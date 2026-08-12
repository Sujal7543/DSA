/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[10]={1,1,0,1,1,1,0,0,1,0};
  int maxi=0;
  int count=0;
  for(int i=0;i<10;i++){
if(arr[i]==1){
    count++;
    maxi=max(maxi,count);
}
else{
    count=0;
}
  }

  cout<<maxi;
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"enter size of array=";
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++){
    cout<<"enter element";
    cin>>arr[i];
  }

  int ans=0;
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]==1){
      count++;
    }
    else{
      ans=max(count,ans);
      count=0;
    }
  }
  ans=max(count,ans);

  cout<<ans;
  return 0;
}