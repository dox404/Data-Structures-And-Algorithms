#include<bits/stdc++.h>
using namespace std;

int main(){
    ///it stores data in key value paris
    map<int, int>mpp;///key is integer value is integer

    map<int, pair<int,int>>mpp;//key is integer and value is two integer

    map<pair<int,int>,int>mpp;//here key is two integer and value is 1 integer

    mpp[1]=2; //key one store 2
    mpp.emplace(3,1); //for key 3 value is 1
    mpp.insert(2,4); //key 2 value 4

    // (map stores unique keys in sorted order)
    map<pair<int,int>,int>mpp2;
    mpp2[{2,3}]=10; //key=2,4 value =10

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second;

    }
    cout<<mpp[1]; // it will print value of key 1 which is 22
    cout<<mpp[5];//it will give 0 or nulll output 

    auto it =mpp.find(3); //to find the iterator
    // cout<<*(it).second; // to find the value
    auto it=mpp.lower_bound(2);
    auto it=mpp.upper_bound(3);

    //erase, swap, size, empty, are same as other

}