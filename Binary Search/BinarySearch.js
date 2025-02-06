// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4


// use the binary searc



function binarySearch(arr,target){
    let start=0
    let end=arr.length-1

    

    while(end>=start){
        let mid=Math.floor((start+end)/2)
        if(arr[mid]===target){
            return mid
        }
        if(arr[mid]>target){
            end=mid-1
        }
        if(arr[mid]<target){
            start=mid+1
        }

        
    }
}

let nums = [-1,0,3,5,9,12]
let target = 9


console.log(binarySearch(nums,target))