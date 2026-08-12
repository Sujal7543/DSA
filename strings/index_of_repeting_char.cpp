
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cout<<"enter first string =";
    cin>>s1;
    int ans=-1;

    for(int i=0;i<s1.size();i++){
        for(int j=i+1;j<s1.size();j++){
            if(s1[i]==s1[j]){
                ans=i;
                break;
            }
            
        }
        if(ans!=-1){
            break;
        }
    }

    cout<<ans;

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cout<<"enter first string =";
    cin>>s1;
    int ans=INT_MAX;

    int fi[256];
    for(int i=0;i<256;i++){
        fi[i]=-1;
    }

    for(int i=0;i<s1.length();i++){
        if(fi[s1[i]]==-1){
            fi[s1[i]]=i;
        }
        else{
            ans=min(ans,fi[s1[i]]);
        }
    }

    if(ans==INT_MAX){
        ans=-1;
    }

    cout<<ans;

    return 0;
}

