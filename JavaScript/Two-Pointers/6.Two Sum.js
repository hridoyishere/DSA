const TwoSum = (arr, target) => {
  let left = 0;
  let right = arr.length - 1;
  for (let i = 0; i < arr.length; i++) {
    let sum = arr[left] + arr[right];
    if (sum === target) {
      return { left, right };
    } else if (sum < target) {
      left++;
    } else {
      right--;
    }
  }
  return false;
};

console.log(TwoSum([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 9));
