// Find The Duplicate Characters
// Example text= "programming"
// Output =r g m

const find = (text) => {
  if (text === "") {
    return false;
  }

  let output = "";

  for (let i = 0; i < text.length; i++) {
    for (let j = i + 1; j < text.length; j++) {
      if (text[i] === text[j]) {
        if (!output.includes(text[i])) {
          output += text[i];
        }
      }
    }
  }

  return output;
};

console.log(find("programming"));
