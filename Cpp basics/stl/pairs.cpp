#include<bits/stdc++.h>
using namespace std;

int main(){
    //pairs
    //pairs is a part of utility library
    //if i want store couple of intiger in a varible


    // to store
    pair<int,int>p={1,3};

    //to acess
    cout<<p.first<<" "<<p.second;

    // nested pair
    pair<int, pair<int, int>>q={1,{2,3}};
    // to  access nested pair
    cout<<q.first<<" "<<q.second.second<<" "<<q.first;

    //declare pair array
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second;


}