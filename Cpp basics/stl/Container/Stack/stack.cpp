#include<bits/stdc++.h>
using namespace std;

int main(){
    // declation
    stack<int>st;
   st.push(1); //{1}
   st.push(2); //{1,2}
   st.push(3); //{1,2,3}
   st.push(4); //{1,2,3,4}
   st.push(5); //{1,2,3,4,5}
    
    st.emplace(6); //{6,1,2,3,4,5}

    cout<<st.top(); // print the top element in this case 5  will print ,indexing is not allowed
    st.pop(); //deletes the last item , 5 will be deleted
    st.size();//for size
    st.empty();

    // for swaping
    stack<int> st1, st2;
    st1.swap(st2);
}