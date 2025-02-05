function bubbleSort(arr){
    let n=arr.length
        for(let i=n-1;i>=0;i--){
            let didSwap=0
            for(let j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    let temp=arr[j]
                    arr[j]=arr[j+1]
                    arr[j+1]=temp
                    didSwap=1
                }
            }
            if(didSwap==0){
                break
            }
            console.log("runs")
        } 
        return arr
}

let arr=[13,46,24,52,20,9]
console.log(bubbleSort(arr))


// it will not run if the array is already  sorted