// Find the Maximum element in arry
//example arry =[1,23,4,5,6,]; output =23


const find=(arr)=>{

    if(arr.length===0)return null
    
    var Max=arr[0]

    for (let i=1; i<arr.length; i++){
        if(arr[i]>Max){
            Max=arr[i]
        }
    }
    return Max
}

const arry =[1,23,4,5,6,];

console.log("The Maximum element is :",find(arry))