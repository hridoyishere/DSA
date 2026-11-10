// Revers Array
// example array = [1,2,3,4,5,6,7,8,9]
// output =[9,8,7,6,5,4,3,2,1]

List<int> reverse(List<int> arr) {
  List<int> rev = [];

  for (int i = arr.length - 1; i >= 0; i--) {
    rev.add(arr[i]);
  }
  return rev;
}

void main(){
  List <int> arr = [1,2,3,4,5,6,7,8,9];
  print(reverse(arr));
}