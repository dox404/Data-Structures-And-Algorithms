#include<bits/stdc++.h>
using namespace std;
    


struct Node{
    int data;
    Node* next;

    //constructor

    //it will automatically initialize the next to  null pointer
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};








int main(){
                     
                     
    vector<int>arr={2,3,4,5};  
    Node* y=new Node(arr[0]);
    cout<<y->data;      
                                   
                     
 return 0;
              
}