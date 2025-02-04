#include<bits/stdc++.h>
using namespace std;

int main(){
    // declation
    deque<int>dq;
    dq.push_back(2); //{2}
    dq.emplace_back(4); //{2,4}
    dq.push_front(5); //{5,2,4}
    dq.emplace_front(); //{2,4}

    dq.pop_back();
    dq.pop_front();
    // rest functions are similar as vector
    //begin,end,rbegin,redn,clear,insert,size,swap
}