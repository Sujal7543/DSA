/*#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int largest=0;
  int sec_largest=-1;
  cout<<"enter the size of array";
  cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cout<<"enter element";
    cin>>arr[i];
 }

 for(int i=0;i<n;i++)
 if(arr[i]>largest){
    sec_largest=largest;
    largest=arr[i];
 }
 else if(arr[i]<largest && arr[i]>sec_largest){
    sec_largest=arr[i];
 } 
 cout<<"second largest element is="<<sec_largest;
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"enter size of array =";
   cin>>n;

   int arr[n];
   for(int i=0;i<n;i++){
      cout<<"enter array element =";
      cin>>arr[i];
   }

   int maxi=0;
   int smaxi=0;

   for(int i=0;i<n;i++){
      if(arr[i]>maxi){
         smaxi=maxi;
         maxi=arr[i];
      }
      else if(arr[i]<maxi && arr[i]>smaxi){
         smaxi=arr[i];
      }
   }

   cout<<smaxi;

   return 0;
}