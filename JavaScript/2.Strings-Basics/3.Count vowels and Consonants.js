// Count Vowels and Consonants
// Example
// text="hello"; output = vowels=2 ;consonants=3


const Find = (text) => {

    if(text === "") return

    let v = 0
    let c = 0

    for(let i = 0; i < text.length; i++){

        if(
            text[i] === "a" ||
            text[i] === "e" ||
            text[i] === "i" ||
            text[i] === "o" ||
            text[i] === "u"
        ){
            v++
        }
        else{
            c++
        }
    }

    return {
        vowels: v,
        consonants: c
    }
}

const text = "hello"

console.log("Total Vowels and Consonants are:", Find(text))