#include<bits/stdc++.h>
using namespace std;
void explainp_q(){
    priority_queue<int,vector<int>,greater<int>> pq;//min heap;
    pq.push(7);
    pq.push(8);
    pq.push(4);
    pq.push(2);
    pq.push(5);

    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();

    }

}

int main(){
    explainp_q();
}