//Sort the array 
// Example arr = [9,6,7,8,3,5,6,4,2,1]
// output =[1,2,3,4,5,6,6,7,8,9]


const Sort=(arr)=>{
    if (arr.length === null){
        return
    }

    const newArr=arr.sort((a,b)=>a-b)
    return newArr
}

const arr=[9,6,7,8,3,5,6,4,2,1]
console.log(Sort(arr))