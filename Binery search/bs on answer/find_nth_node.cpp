/*
#include<bits/stdc++.h>
using namespace std;
double multiply(double mid,int n){
    double ans=1.0;
    for(int i=1;i<=n;i++){
        ans=mid*ans;
    }
    return ans;
}

void getnthroot(int n,int m){
    double low=1;
    double high=m;
    double eps=1e-6;

    while((high-low)>eps){
        double mid=(low+high)/2.0;

        if(multiply(mid,n)>m){
            high=mid;
        }
        else{
            low=mid;
        }
    }

    cout<<low;
}

int main(){

    int n;
    cout<<"enter nth node which you want";
    cin>>n;

    int m;
    cout<<"enter target";
    cin>>m;

    getnthroot(n,m);
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;

double multiply(double number , int n){
    double ans=1.0;

    for(int i=1;i<=n;i++){
        ans=ans*number;
    }
    return ans;
}

void getans(int n,int m){
    double low=1;
    double high=m;
    double eps=1e-6;

    while((high-low)>eps){
        double mid=(low+high)/2.0;

        if(multiply(mid,n)>m){
            high=mid;
        }
        else{
            low=mid;
        }
    }
    cout<<"ans node = "<<low;
}

int main(){
    int n,m;
    cout<<"enter nth node then target";
    cin>>n>>m;

    getans(n,m);
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
double find(double mid,int m){
    double ans=1.0;
    for(int i=0;i<m;i++){
        ans*=mid;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;

    int m;
    cout<<"Enter nth node";
    cin>>m;

    double low=1.0;
    double high=n*1.0;

    double eps=1e-6;
    
    while(high-low>eps){
        double mid=(low+high)/2;

        double x=find(mid,m);

        if(x>n){
            high=mid;
        }
        else{
            low=mid;
        }
    }

    cout<<low;
    return 0;
}