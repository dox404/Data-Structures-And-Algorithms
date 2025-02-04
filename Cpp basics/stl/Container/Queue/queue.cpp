#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back()+=5; //add 5 to the last element so, 4+5=9

    q.front(); // first element so, 1

    q.pop();  //{2,9}

    //size swap empty same as stack


}
