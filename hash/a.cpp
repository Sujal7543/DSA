#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 5, 3, 2};
    int n = 6;

  int hash[10]={0};

  for(int i=0;i<n;i++){
    hash[arr[i]]++;
  }

  for(int i=0;i<10;i++){
    if(hash[i]>0){
cout<<i<<"->"<<hash[i]<<endl;
    }
  }
    return 0;
}
