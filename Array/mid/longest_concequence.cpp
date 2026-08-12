// o(nlogn)sol vause of sort
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={100,5,4,9,3,7,2,6,8,12};
    int n=10;
    sort(arr,arr+n);
    int count=1;
    int maxi=1;

    for(int i=0;i<n-1;i++){
        if(arr[i+1]==arr[i]+1){
            count++;
        }
        else{
            count=1;
        }
    maxi=max(maxi,count);
    }
    cout<<maxi;
    return 0;
}*/

// optimal
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {100, 5, 4, 9, 3, 2, 7, 6, 8, 12};
    int n = 10;
    int maxi = 1;
    if (sizeof(arr) == 0)
    {
        return 0;
    }
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                count++;
                x = x + 1;
            }
            maxi = max(maxi, count);
        }
    }
    cout << maxi;
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Entet element";
        cin>>arr[i];
    }

    unordered_set<int>st;

    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    int count=0;
    int maxi=0;
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int x=it;
            while(st.find(x)!=st.end()){
                count++;
                x++;
            }
            maxi=max(count,maxi);
            count=0;
        }
    }

    cout<<maxi;

    return 0;
}