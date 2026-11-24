// Count Even & Odd Numbers in an Array
// example: arr[] = {10, 5, 8, 20, 3} => output: Even: 3, Odd: 2

List<int> Cout(List<int> arr) {
  int even = 0;
  int odd = 0;

  int n = arr.length;

  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  return [even, odd];
}

void main() {
  List<int> array = [10, 5, 8, 20, 3];

  List<int> result = Cout(array);

  print("Total Even: ${result[0]}");
  print("Total Odd: ${result[1]}");
}
