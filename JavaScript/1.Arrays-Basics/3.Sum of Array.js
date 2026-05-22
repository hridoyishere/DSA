// sum of array
// Example arr=[1,2,3,4,5,6,7,8,9,10] 
// output = 55


const Sum =(arr)=>{
    let sum=0

    for (let i=0; i< arr.length; i++){
        sum += arr[i]
    }

    return sum
}

console.log("Sum of array is :",Sum([1,2,3,4,5,6,7,8,9,10]))