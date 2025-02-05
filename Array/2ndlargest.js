
// bruitforce
//using bubble sort
function bSecondLargest(arr){
    for(let i=arr.length-1;i>=1;i--){
        for(let j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                let temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp
            }
        }
    }
    return arr[arr.length-2]
}






// better
function getSecondLargest(arr){ 
    let largest=arr[0]
    for(let i=0;i<arr.length;i++){
        if(arr[i]>largest){
            largest=arr[i]
        }
    }
    let secondlargest=-1
    for(let j=0;j<arr.length;j++){
        if(arr[j]>secondlargest&&arr[j]!=largest){
            secondlargest=arr[j]
        }
    }
    return secondlargest
    
}

// optimal
function optimalSol(arr){
    let largest=arr[0]
    let secondlargest=-1

    for(let i=1;i<arr.length;i++){
        if(arr[i]>largest){
            secondlargest=largest
            largest=arr[i]
            
        }else if(arr[i]<largest&&arr[i]>secondlargest){
            secondlargest=arr[i]
        }
    }
    return secondlargest
}


let arr=[1,8,7,56,90,90]
console.log(getSecondLargest(arr))
console.log(bSecondLargest(arr))
console.log(optimalSol(arr))