/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18}};
    
    sort(intervals.begin(),intervals.end());

    vector<vector<int>>ans;

    for(int i=0;i<intervals.size();i++){
        int start=intervals[i][0];
        int end=intervals[i][1];

        if(!ans.empty() && end<=ans.back()[1]){
            continue;
        }
        else{
            for(int j=i+1;j<intervals.size();j++){
                if(intervals[j][0]<=end){
                    end=max(end,intervals[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({start,end});
        }
    }

    for(auto v : ans){
        cout<<v[0]<<" "<<v[1]<<endl;
    }


    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of intervals";
    cin>>n;

    vector<vector<int>>intervals(n,vector<int>(2));
    for(int i =0;i<n;i++){
        cin>>intervals[i][0];
        cin>>intervals[i][1];
    }

    sort(intervals.begin(),intervals.end());

    vector<vector<int>>ans;
    for(int i=0;i<intervals.size();i++){
        int first=intervals[i][0];
        int second=intervals[i][1];
        int j=i+1;

        if(!ans.empty() && intervals[i][0]<ans.back()[1]){
            continue;
        }
        while(j<intervals.size() && intervals[j][0]<=second){
            second=max(second,intervals[j][1]);
            j++;
        }
        ans.push_back({first,second});
    }

    for(auto it:ans){
        cout<<it[0]<<" "<<it[1];
        cout<<endl;
    }
    return 0;
}