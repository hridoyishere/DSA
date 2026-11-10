// find the minimum elements in array
// example arr=[1,2,3,4,5,6,7]; output = 1;

int Find(List<int> arr) {
  int min = arr[0];
  for (int i = 1; i < arr.length; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}

void main() {
  List<int> arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
  print(Find(arr));
}
