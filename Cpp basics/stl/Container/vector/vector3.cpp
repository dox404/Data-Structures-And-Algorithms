#include<bits/stdc++.h>
using namespace std;

int main(){
    //vector initalize
    vector<int>v={1,2,3,4,5};

    // iterator initialize
    vector<int>::iterator it=v.begin();

    // printing the vector values

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    //deletion in vector(one element)
    v.erase(v.begin());
    //deletion multiple element
    // v.erase(first_position,end_position)
    v.erase(v.begin()+2,v.begin()+4);//it will delete the 3,4 element (note-included the first poisition and excluded the last position)

}