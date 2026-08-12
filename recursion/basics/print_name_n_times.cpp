#include<bits/stdc++.h>
using namespace std;
void print(int n,string name){
    if(n==0){
        return;
    }
    cout<<name<<endl;
    n--;
    print(n,name);
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    cin.ignore();
    
    string name;
    cout<<"enter name";
    getline(cin,name);
    print(n,name);

    return 0;
}