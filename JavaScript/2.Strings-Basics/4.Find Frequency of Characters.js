// Find Frequency of Characters
// Example
// text = "hello how are you bro";
// output = {'h': 2, 'e': 2, 'l': 2, 'o': 4, ' ': 4, 'w': 1, 'a': 1, 'r': 2, 'y': 1, 'u': 1, 'b': 1}


const Find=(text)=>{
    if (text ===""){
        return
    }

    let fre={}

    for (let i=0 ; i <text.length; i++){
        if(fre[text[i]]){
            fre[text[i]] +=1
        }else{
            fre[text[i]] =1
        }
    }

    return fre
}

const text = "hello how are you bro";
console.log(Find(text))