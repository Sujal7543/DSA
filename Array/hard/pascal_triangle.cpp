// to dinf element at row and index;
/*
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int r;

    cout<<"enter the row";
    cin>>n;

    cout<<"enter the coloum";
    cin>>r;

    long long result=1;

    for(int i=0;i<r;i++){
        result=result*(n-i);
        result=result/(i+1);
    }

    cout<<"element in pascal triangle ar row="<<n<<"and at coloum="<<r<<"="<<result;

    return 0;
}
    */

// print whole coloum of given row;
//less optimal
/*
#include<bits/stdc++.h>
using namespace std;
long long print(int n,int c){
    long long a=1;

    for(int i=0;i<c;i++){
        a=a*(n-i);
        a=a/(i+1);
    }
    return a;
}
int main(){

    int n;
    cout<<"enter row no";
    cin>>n;

    long long result=0;

    for(int c=0;c<=n;c++){
        result=print(n,c);
        cout<<result<<",";
    }


    return 0;
}
    */

    //much optimal for row;
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter row";
    cin>>n;

    int ans=1;
    cout<<ans<<",";

    
    for(int j=1;j<n;j++){
        ans=ans*(n-j);
        ans=ans/(j);
        cout<<ans<<" ";
    }

    
    return 0;
}
    */
// pritning row till n;

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter row";
    cin>>n;

    for(int row=0;row<n;row++){
        long long ans=1;
        for(int col=0;col<=row;col++){
            cout<<ans<<" ";
            ans=ans*(row-col);
            ans=ans/(col+1);
        }
        cout<<endl;
    }

    return 0;
}
    */

    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cout<<"enter row";
        cin>>n;

        for(int i=1;i<=n;i++){
             int val=1;
            for(int j=1;j<i+1;j++){
                cout<<val;
                val=val*(i-j);
                val=val/j;
                }
                 cout<<endl;
            }

        return 0;
    }