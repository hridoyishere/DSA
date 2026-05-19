//Reverse String
//example text="hello"; output ="olleh"


const Reverse = (text) => {

    if (text === ""){
        return
    }

    let ReverseText = ""

    for(let i = text.length - 1; i >= 0; i--){

        ReverseText += text[i]
    }

    return ReverseText
}

const text = "hello"

console.log("Reversed String :", Reverse(text))