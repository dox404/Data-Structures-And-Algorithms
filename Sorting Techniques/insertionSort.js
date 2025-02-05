function insertionSort(arr){
    for(let i=0;i<=arr.length-1;i++){
        j=i
        while(j>0&&arr[j]<arr[j-1]){
            let temp=arr[j]
            arr[j]=arr[j-1]
            arr[j-1]=temp
            j--
        }
    }
    return arr
}



console.log(insertionSort([13,46,24,52,20,9]))


