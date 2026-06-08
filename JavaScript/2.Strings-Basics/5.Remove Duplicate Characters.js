// Remove the duplicate characters 
// example text="hello"
// output= "heo"


const RemoveAllDuplicates = (text) => {

    if (text === "") return "";

    let freq = {};

    
    for (let ch of text) {
        freq[ch] = (freq[ch] || 0) + 1;
    }

    let result = "";

    
    for (let ch of text) {
        if (freq[ch] === 1) {
            result += ch;
        }
    }

    return result;
};

console.log(RemoveAllDuplicates("hello"));