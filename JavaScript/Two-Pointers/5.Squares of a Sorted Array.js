// Squares of a Sorted Array
// Given an integer array sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// Example input = [-4, -1, 0, 3, 10]  output = [ 0, 1, 9, 16, 100 ]

const sortedSquare = (arr) => {
  let left = 0;
  let right = arr.length - 1;

  const result = new Array(arr.length);
  let position = arr.length - 1;

  while (left <= right) {
    let leftSq = arr[left] * arr[left];
    let rightSq = arr[right] * arr[right];

    if (leftSq > rightSq) {
      result[position] = leftSq;
      left++;
    } else {
      result[position] = rightSq;
      right--;
    }
    position--
  }
  return result;
};

let array = [-4, -1, 0, 3, 10];

console.log(sortedSquare(array));
