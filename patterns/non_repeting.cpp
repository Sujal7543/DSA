#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int nonr=0;
    int nums[]={4,1,2,1,2};
    int len=sizeof(nums)/4;//5
for(int i=0;i<len;i++){
    nonr=nonr^nums[i];
}

cout<<nonr; 
return 0;

}