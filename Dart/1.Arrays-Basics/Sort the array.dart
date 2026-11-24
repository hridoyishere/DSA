// Sort The array
// Example arr[] = {44, 8, 6, 4, 6, 66, 7, 3, 2, 4, 4};
// output= 2 3 4 4 4 6 6 7 8 44 66

void BubbleSort(List<int> arr) {
  int n = arr.length;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void main() {
  List<int> Array = [44, 8, 6, 4, 6, 66, 7, 3, 2, 4, 4];

  BubbleSort(Array);

  print(Array);
}
