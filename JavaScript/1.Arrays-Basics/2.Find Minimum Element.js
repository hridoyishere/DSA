// Find the minimum element
// Example arr=[7,54,5,6,7,8,4,2,1,]; output =1


const Find = (arr)=>{
    if (arr.length===""){
        return 
    }

    let min=arr[0]

    for (let i=0;i<arr.length; i++){
        if (arr[i]< min){
            min=arr[i]
        }
    }
    return min
}

const arr=[7,54,5,6,7,8,4,2,1,]

console.log("The Minimum element is :",Find(arr))