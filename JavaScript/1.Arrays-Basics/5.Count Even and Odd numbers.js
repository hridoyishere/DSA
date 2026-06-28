// Count Even & Odd Numbers in an Array
// example: arr= [10, 5, 8, 20, 3]
// output: Even: 3, Odd: 2

const Cout = (arr) => {
  if (arr.length === 0) {
    return;
  }

  let Even = 0;
  let Odd = 0;

  for (let i = 0; i < arr.length -1; i++) {
    if (arr[i] % 2 === 0) {
      Even++;
    } else {
      Odd++;
    }
  }

  return `Even: ${Even}, Odd: ${Odd}`;
};

const arr = [10, 5, 8, 20, 3];

console.log(Cout(arr));
