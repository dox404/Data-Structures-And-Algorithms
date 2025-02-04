#include<bits/stdc++.h>
using namespace std;

int main(){
// set stores everything in  a sorted manner
// and it stores only the unique elemenets
set<int>st;
    st.insert(1);//{1}
    st.insert(2);//{1,2}
    st.insert(2);//{1,2} // it iwll not store the same value again becoz it stores unique elements
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}

    //begin,end,rebegin,rend,size
    //empty swap are same as others
    //{1,2,3,4,5}
    auto it=st.find(3); //it will point to the 3 element memory adress
    auto it=st.find(6); //it will point to the next of ending element memory locatrion becaosue 6 is not present in the set

    st.erase(5); //erase 5


    int count=st.count(1); //if presnt then gives 1 and if not then it will give 0

        // erase with itarator
        auto it=st.find(3);
        st.erase(it);

    //multiple delete in set

    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2); //after erase {1,4,5} {first,last } manner

    //lower bound upper bound
    // link-https://www.youtube.com/watch?v=edJ19qIL8WQ&t=0s&ab_channel=takeUforward

    


}
