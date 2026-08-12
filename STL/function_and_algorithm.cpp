#include<bits/stdc++.h>
using namespace std;
void explainsort(){
int arr[5]={1,2,4,5,6};
sort(arr,arr+5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
}
}
void explainaccumulate(){
    int arr[5]={1,7,5,4,9};
    cout<<accumulate(arr,arr+5,0);
}
void explaincount(){
int arr[5]={1,2,5,6,5};
int num=5;
cout<<count(arr,arr+5,num);
}
void explainfind(){
    int arr[5]={1,2,3,5,6};
    auto it=find(arr,arr+5,5);
    cout<<*it;
    if(it==arr+5){
        cout<<"not found";
    }

}
void explainpermutation(){
    string str="abc";
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));//print forward permutation
    string st="cba";
    do {
        cout<<st<<endl;
    } while(prev_permutation(st.begin(),st.begin()+3));//for privious permutaion printing
}
void explainmax_element(){
    int arr[5]={1,2,55,9,10};
    auto it=max_element(arr,arr+5);
    cout<<*it;
}
void explainmin_element(){
    int arr[5]={4,5,6,1,20};
    auto it = min_element(arr,arr+5);
    cout<<*it;
}
void explainreverse(){
    int arr[8]={1,4,5,6,8,9,7,5};
    reverse(arr,arr+8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}
void explainpow(){
    int n=2;
    int ans=pow(n,3);
    cout<<ans;
}

bool comparator(int el1,int el2){
    if(el1<el2){
        return false;
    }
    else{
        return true;
    }
}
void explaincomparator(){
    int arr[6]={5,4,8,9,6,2};
    sort(arr,arr+6,comparator);
    for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
    }
}
int main(){
    explainreverse();
    return 0;
}