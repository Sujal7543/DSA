#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n){
                cout<<"4";
            if(i==2||i==3||i==4||i==5)
        }
    }
}

int main(){
int n;
cout<<"enter number";
cin>>n;
print(n);
}