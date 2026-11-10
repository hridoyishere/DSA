// Sum of Array;
// Example:
// array = [1,2,3,4,5,6,7,8,9]
// output= 45;

int SumOfArr(List<int> arr) {
  int sum = 0;
  for (int i = 0; i < arr.length; i++) {
    sum += arr[i];
  }
  return sum;
}

void main() {
  List<int> arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
  print(SumOfArr(arr));
}
