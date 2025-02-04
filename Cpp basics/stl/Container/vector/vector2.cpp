#include<bits/stdc++.h>
using namespace std;

int main(){
    //vector initalize
    vector<int>v={1,2,3,4,5};

    // iterator initialize
    vector<int>::iterator it=v.begin();

    // printing the vector values

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

}