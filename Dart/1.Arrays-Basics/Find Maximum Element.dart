// find the max elements in array
// example arr=[1,2,3,4,5,6,7]; output = 7;

int findmax(List<int> arr) {
  int max = arr[0];
  for (int i = 0; i < arr.length; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

void main() {
  List<int> array = [1, 2, 3, 4, 5, 6, 7];
  print(findmax(array));
}
