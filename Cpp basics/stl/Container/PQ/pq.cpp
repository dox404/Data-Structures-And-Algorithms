#include<bits/stdc++.h>
using namespace std;

int main(){
    // pq largest valuue always stays at the ,top
    priority_queue<int>pq;
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.push(1); //{8,5,2,1}
    pq.emplace(10); //{10,8,5,2,1}

    pq.top(); //prints the top element

    pq.pop();  //{8,5,2,1}

    //size swap empty same as others



    // minimum pq
    priority_queue<int, vector<int>,greater<int>>pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.push(1); //{1,2,5,8}

    pq.top(); //1

}
