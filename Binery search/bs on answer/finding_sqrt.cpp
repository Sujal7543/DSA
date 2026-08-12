/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int ans=0;

    for(int i=1;i<=n;i++){
        if(i*i>n){
            ans=i-1;
            break;
        }
    }
    cout<<"sqrt = "<<ans;

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;

    int low=1;
    int high=n;
    while(low<high){
        int mid=(low+high)/2;

        if(mid<=n/mid){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<high;

    return 0;
}
    */

    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cout<<"Enter size of array";
        cin>>n;

        int l=1;
        int r=n/2;

        while(l<=r){
            int mid=(l+r)/2;

            if(mid*mid<=n){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }

        cout<<r;
        return 0;
    }