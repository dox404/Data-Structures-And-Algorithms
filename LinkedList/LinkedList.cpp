// define a self define data type

#include<bits/stdc++.h>
using namespace std;


//self defined data types
struct Node{
    int data;
    Node* next;

    //constructor
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
};



int main(){
                     
       vector<int>arr={2,3,4,5};  
       Node* y=new Node(arr[0],nullptr);
       cout<<y->data;      
                     
                     
 return 0;
              
}