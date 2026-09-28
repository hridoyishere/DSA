function reverseArray(arr) {
  let left = 0;
  let right = arr.length - 1;

  while (left < right) {
    // Swap
    let temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    // Move pointers
    left++;
    right--;
  }

  return arr;
}

console.log(reverseArray([1, 2, 3, 4, 5]));
// [5, 4, 3, 2, 1]
