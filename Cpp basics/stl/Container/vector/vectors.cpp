#include<bits/stdc++.h>
using namespace std;

int main(){
    //vector is a container which is dynamic nature
    // it is similar as an array

    vector<int>v;

    //to insert
    v.push_back(1);
    v.emplace_back(2); // it is fatser than push back

    //vector pair
    vector<pair<int,int>>vp;

    // insert in vector pair
    vp.push_back({1,2});
    vp.emplace_back(1,2);

    //to declare vector with 5 100
    vector<int>v(5,100); //={100,100,100,100,100}
    vector<int>v(5); //={0,0,0,0,0}


    //copy vector
    vector<int>v1(5,20);
    vector<int>v2(v1); //it will copy the vector v1 to vector v2

    // access vector
    cout<<v[0]; //similar to the array
    cout<<v[0];

    //iterator
    // iterator is nothing but its point the memory of the vector not the value only the memeory loctaion

    vector<int>vec={1,2,3,4}; //it is a vector named vec

    vector<int>::iterator it=vec.begin(); // it will point the vec vectors first memory  address(the memory address should be in conigeous location)
    it++; // increased the value by 1 then it will point tot the next memory address
    cout<<*it<<" ";


    vector<int>::iterator itEnd=vec.end(); //it will point the last memory location after the end adress of the vector for the vec vector it will point the memory location after the  last element(4) memory location
    // vector<int>::iterator itREnd=vec.rend();  // it will point the reversed vectors last element , means it will point the original vectors first element
    // vector<int>::iterator itRbegin=vec.rbegin();   //  it will point the reversed vectors first element menas last element of the original vector




}