/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={9,8,7,6,5,4,3,2,1};

    for(int i=0;i<9;i++){
        for(int j=0;j<9-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={9,8,7,6,5,4,3,2,1};

    for(int i=0;i<9;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={9,8,7,6,5,4,3,2,1};

    for(int i=0;i<9-1;i++){
        int mini=i;
        for(int j=i;j<9;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
    */

    /*
    #include<bits/stdc++.h>
    using namespace std;
    int mergesort(int arr[],int left,int right,int mid){
        int l=left;
        int r=mid+1;
        vector<int>v;
        while(l<=mid && r<=right){
            if(arr[l]<arr[r]){
                v.push_back(arr[l]);
                l++;
            }
            else{
                v.push_back(arr[r]);
                r++;
            }
        }
        while(l<=mid){
            v.push_back(arr[l]);
            l++;
        }
        while(r<=right){
            v.push_back(arr[r]);
            r++;
        }

        for(int i=0;i<v.size();i++){
            arr[left+i]=v[i];
        }
    
        }
    


    void merge(int arr[],int left,int right){
        if(left==right){
            return;
        }
        int mid=(left+right)/2;
        merge(arr,left,mid);
        merge(arr,mid+1,right);
        mergesort(arr,left,right,mid);
    }
    int main(){
        int arr[9]={9,8,7,6,5,4,3,2,1};
        merge(arr,0,8);

        for(int i=0;i<9;i++){
            cout<<arr[i]<<" ";
        }


        return 0;
    }*/

    #include<bits/stdc++.h>
    using namespace std;
    int partition(int arr[],int left,int right){
        int pivot=arr[left];
        int l=left;
        int r=right;

        while(l<r){
            while(l<right && arr[l]<=pivot){
                l++;
            }
            while(r>left && arr[r]>pivot){
                r--;
            }
            if(l<r){
                swap(arr[l],arr[r]);
            }
        }
        swap(arr[left],arr[r]);

        return r;
    }
    void quicksort(int arr[],int left,int right){
        if(left>=right){return;}
        int p=partition(arr,left,right);
        quicksort(arr,left,p-1);
        quicksort(arr,p+1,right);
    }
    int main(){
        int arr[9]={9,8,7,6,5,4,3,2,1};

        quicksort(arr,0,8);
        for(int i=0;i<9;i++){
            cout<<arr[i]<<" ";
        }

        return 0;
    }