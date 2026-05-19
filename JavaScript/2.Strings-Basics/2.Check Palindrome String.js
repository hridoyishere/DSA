//Check Palindrome String
// example str= "racecar" output= True


const Check=(text)=>{
    if(text==="") return

    let start =0
    let end=text.length-1

    while(start<end){
        if(text[start]!==text[end]){
            return false
        }else{
            start++
            end--
        }
        return true
    }
}

const text ="racecar"
console.log(Check(text))