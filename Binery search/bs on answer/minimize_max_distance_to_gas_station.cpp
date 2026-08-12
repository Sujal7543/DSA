//*important*
//brute force
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array ( note = while entering elements in sorted form ) =";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }

    int k;
    cout<<"how many gas station you want to place =";
    cin>>k;

    int howmany[n-1]={0};

    for(int gasstation=1;gasstation<=k;gasstation++){
        long double maxsection=-1;
        int maxindex=-1;

        for(int i=0;i<n-1;i++){
            long double diff=arr[i+1]-arr[i];
            long double sectionlength=diff/((long double)howmany[i]+1);
            if(maxsection<sectionlength){
                maxsection=sectionlength;
                maxindex=i;
            }
        }
        howmany[maxindex]++;
    }

    long double maxans=-1;

    for(int i =0;i<n-1;i++){
        long double diff=arr[i+1]-arr[i];
        long double sectionlength=diff/(long double)(howmany[i]+1);
        maxans=max(maxans,sectionlength);
    }

    cout<<maxans;


    return 0;
}*/

// by priority queue (better ingenius trick but take space complexity);
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array (note = enter elements in sorted fashion) = ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }

    int k;
    cout<<"enter how many gas stations you want to place =";
    cin>>k;

    int howmany[n-1]={0};
    priority_queue<pair<long double,int>> pq;

    for(int i=0;i<n-1;i++){
        pq.push({arr[i+1]-arr[i],i});
    }

    for(int gasstation=1;gasstation<=k;gasstation++){
        auto top=pq.top();
        pq.pop();

        int idx=top.second;

        howmany[idx]++;

        long double diff=arr[idx+1]-arr[idx];
        long double newsection=diff/(long double)(howmany[idx]+1);

        pq.push({newsection,idx});
    }

    auto ans=pq.top().first;
    cout<<ans;

    return 0;
}*/

//optimal(binery search)

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array (note=enter elements in sorted order) =";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }
    int k;
    cout<<"enter how many gas stations you want to place=";
    cin>>k;

    long double low=0.0;
    long double high=0;
    for(int i=0;i<n-1;i++){
        high=max(((long double)arr[i+1]-arr[i]),high);
    }

    long double eps=1e-6;

    while((high-low)>eps){
        long double mid=(low+high)/2.0;
        long double station=0;

        for(int i=0;i<n-1;i++){
            long double diff=(arr[i+1]-arr[i]);
            station+=ceil(diff/mid)-1;
        }
        if(station>k){
            low=mid;
        }
        else{
            high=mid;
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
    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    int k;
    cout<<"enter no of new gas";
    cin>>k;

    long double low=0;
    long double high=0;
    for(int i=0;i<n-1;i++){
        high=max(high,(long double)arr[i+1]-arr[i]);
    }

    long double eps=1e-6;
    while(high-low>eps){
        double mid=(low+high)/2;
        int count=0;

        for(int i=0;i<n-1;i++){
            double diff=arr[i+1]-arr[i];
         count+=ceil(diff/mid)-1;

        }
      if(count<=k){
            high=mid;
        }
        else{
            low=mid;
        }
    
}

    cout<<high;

    return 0;
}