/*
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int ind = -1;
    for (int i = n - 2; i >= 0; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }

    if (ind == -1)
    {
        reverse(arr, arr + n);
    }

    for (int i = n - 1; i > ind; i++)
    {
        if (arr[i] > arr[ind])
        {
            swap(arr[i], arr[ind]);
            break;
        }
    }
    reverse(arr + ind + 1, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
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
        cout<<"Enter element";
        cin>>arr[i];
    }

    int j=-1;
    for(int i=n-1;i>0;i--){
        if(arr[i-1]<arr[i]){
            j=i-1;
            break;
        }
    }

    if(j==-1){
        reverse(arr,arr+n);
    }
    else{
    for(int i=n-1;i>=j;i--){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            break;
        }
    }

    reverse(arr+j+1,arr+n);

}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}