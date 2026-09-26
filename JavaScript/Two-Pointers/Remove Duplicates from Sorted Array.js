const RemoveDuplicates = (arr) => {
  let j = 0;
  for (i = 1; i < arr.length; i++) {
    if (arr[j] != arr[i]) {
      j++;
      arr[j] = arr[i];
    }
  }
  return j + 1;
};
let array = [1, 1, 1, 2, 2, 2, 3, 3];
const len = RemoveDuplicates(array);
for (i = 0; i < len; i++) {
  console.log(arrry[i]);
}
