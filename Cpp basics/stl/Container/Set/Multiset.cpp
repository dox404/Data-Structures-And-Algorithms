#include<bits/stdc++.h>
using namespace std;

int main(){
    //multiset cand hold multiple same value
multiset<int>ms;
ms.insert(1); //{1}
ms.insert(1); //{1,1}
ms.insert(1); //{1,1,1}


ms.erase(1); //it will erase all 1 in the set

ms.count(1); //gives count 


//single element dlete in multiset
ms.erase(ms.find(1)); // its creating an terator to the one element and delete it

ms.erase(ms.find(1),ms.find(1));

//rest functions are same
}
