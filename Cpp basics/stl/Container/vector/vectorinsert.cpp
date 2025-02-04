#include<bits/stdc++.h>
using namespace std;
int main(){

    // insert

    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //for multiple element {300,10,10,100,100}


    // insert function

    vector<int>copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}


    //size 
    // {10,20}
    v.size(); //2

    // {10,20}
    v.pop_back();//{10}

    //v1->{10,20}
    //v2->{30,40}
    //to swap
    // v1.swap((v2));  v1->{30,40} v2->{10,20}

    //to erase everything form vector
    v.clear();

    cout<<v.empty(); //true or false


}