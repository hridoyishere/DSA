// Find the largest word in sentence
// example
// text="how are you doing"
// Output = "doing"

const Find = (text) => {
  if (text === "") {
    return;
  }

  let word = "";
  let largestWord = "";

  for (let i = 0; i < text.length; i++) {
    if (text[i] !== " ") {
      word += text[i];
    } else {
      if (word.length > largestWord.length) {
        largestWord=word
      }
      word=""
    }
  }

  if(word.length>largestWord.length){
    largestWord=word
  }

  return largestWord
};

console.log(Find("how are you doing"))