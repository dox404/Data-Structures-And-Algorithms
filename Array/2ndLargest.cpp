#include<bits/stdc++.h>
using namespace std;

    // bruitforce with sorting
    int bSecondlargest(int arr[]){
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int largest=arr[n-1];
    int secondLargest=arr[n-2];
      for(int i=n-2;i>=0;i++){
        if(arr[i]!=largest){
            secondLargest=arr[i];
        }
      }

    }


int main(){
int arr[]={1,8,7,56,90};                 
bSecondlargest(arr);               
                     
 return 0;
              
}