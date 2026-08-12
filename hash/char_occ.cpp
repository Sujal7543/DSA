/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the length of string array";
cin>>n;

char s[n];
int hash[123]={0};
for(int i=0;i<n;i++){
    cin>>s[i];
    hash[s[i]]++;
}

for(int i=0;i<123;i++){
    if(hash[i]>0){
        cout<<(char)i<<"->"<<hash[i]<<endl;
    }
}
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a size of string ";
    cin>>n;
    char s[n];
    int hash['z'-'a'+1]={0};

    for(int i=0;i<n;i++){
        cin>>s[i];
        hash[s[i]-'a']++;
    }

for(int i=0;i<'z'-'a'+1;i++){
    if(hash[i]>0){
        cout<<char(i+'a')<<"->"<<hash[i]<<endl; 
    }
}
    return 0;
}