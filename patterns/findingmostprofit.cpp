// [7,1,5,3,6,4]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int max=0;
    int maxsub=0;
    int price[] = {7,1,5,3,6,4};
    int len = sizeof(price)/4;
    for(int i=len-1;i>=1;i--){
        if(max<price[i])
        max=price[i];
        if(maxsub<max-price[i]){
            maxsub=max-price[i];
        }
    }
cout<<"most profitable sale is = "<<maxsub;
return 0;
}

