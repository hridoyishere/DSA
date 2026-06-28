// Check if Array is Sorted
// example: arr= [10, 5, 8, 20, 3]=> output: No
// example: arr= [3, 5, 8, 10, 20] => output: Yes

const IsSorted = (arr) => {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > arr[i + 1]) {
      console.log("No");
      return
    }
    console.log("Yes")
  }
};

const arr = [10, 5, 8, 20, 3];
IsSorted(arr);
