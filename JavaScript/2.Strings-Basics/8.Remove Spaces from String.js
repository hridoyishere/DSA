// Remove Spaces from string
// text = "I want to be capable"
// Output ="Iwanttobecapable"


const Remove=(text)=>{
    if(text===""){
        return
    }

    let result=""

    for(let i=0;i<text.length;i++){
        if(text[i]!==" "){
            result+=text[i]
        }
    }
    return result
}

console.log(Remove("I want to be capable"))