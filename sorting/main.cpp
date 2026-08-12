#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=0;i<5;i++){
        if(i==0||i==n-1){
            cout<<"*****";
        }
        else{cout<<"  *  ";}
        cout<<endl;
    }
    cout<<endl;
    cout<<"*     *****  *       *  *****"<<endl;
    cout<<"*     *   *   *     *   *    "<<endl;
    cout<<"*     *   *    *   *    *****"<<endl;;
    cout<<"*     *   *     * *     *    "<<endl;;
    cout<<"***** *****      *      *****"<<endl;;
    cout<<endl;
               cout<<"*   *"<<endl;
               cout<<"*   *"<<endl;
               cout<<"*   *"<<endl;
               cout<<"*   *"<<endl;
               cout<<"*****"<<endl;
}
void print2(int n){
     cout<<"       *     *"<<endl;
    cout<<"     *    *    *"<<endl;
    cout<<"    *            *"<<endl;
    cout<<"      *         *"<<endl;
    cout<<"        *      *"<<endl;
    cout<<"          *   *"<<endl;
    cout<<"            *"<<endl;
    cout<<endl;
}
void print3(int m){
    cout<<"***** *   * ***** *     * ***    *     * *****"<<endl;
cout<<"*     *   * *   * * *   * *   *  * *   *   * "<<endl;
cout<<"*     ***** ***** *  *  * *    * *  *  *   *"<<endl;
cout<<"*     *   * *   * *   * * *   *  *   * *   *"<<endl;
cout<<"***** *   * *   * *     * ****   *     * *****"<<endl;
}
int main(){
    print(5);
    print2(1);
    print3(2);
return 0;
}
