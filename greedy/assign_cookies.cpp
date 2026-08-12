#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"enter size of greed array ";
    cin>>n;

    int m;
    cout<<"enter size of size array ";
    cin>>m;

    int greed[n];
    int size[m];

    for(int i=0;i<n;i++){
        cout<<"enter greed element =";
        cin>>greed[i];
    }

    for(int i=0;i<m;i++){
        cout<<"enter size element =";
        cin>>size[i];
    }

    sort(greed,greed+n);
    sort(size,size+m);

    int l=0;
    int r=0;
    while(l<n&&r<m){
        if(greed[l]<=size[r]){
            l++;
        }
        r++;
    }

    cout<<"total satisfied ="<<l;
    return 0;
}