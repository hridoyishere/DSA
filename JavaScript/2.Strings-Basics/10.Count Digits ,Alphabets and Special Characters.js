// Count Digits, Alphabets, and Special Characters
//Example:

// "abc123@!"
// alphabets = 3
// digits = 3
// special = 2

const Find = (text) => {
  if (text === "") {
    return;
  }

  let alphabets = 0;
  let digits = 0;
  let special = 0;

  for (let i = 0; i < text.length; i++) {
    if (text[i] >= "0" && text[i] <= "9") {
      digits++;
    } else if (
      (text[i] >= "a" && text[i] <= "z") ||
      (text[i] >= "A" && text[i] <= "Z")
    ) {
      alphabets++;
    } else {
      special++;
    }
  }

  return { alphabets, digits, special };
};

console.log(Find("abc123@!"));
