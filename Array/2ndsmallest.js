


function ssmallest(arr){
    let smallest=arr[0]
    let ssmallest=Infinity
    for(let i=1;i<arr.length;i++){
        if(arr[i]<smallest){
            ssmallest=smallest
            smallest=arr[i]
        }else if(arr[i]<ssmallest&&arr[i]!=smallest){
            ssmallest=arr[i]
        }
    }
   return ssmallest
}
let arr=[1,8,7,56,20,90]
console.log(ssmallest(arr))