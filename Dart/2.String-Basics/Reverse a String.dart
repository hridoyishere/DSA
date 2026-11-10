// Reverse a string
// example str = "hello"
// output = "olleh"

String reverse(String str) {
  String rev = "";
  for (int i = str.length -1 ; i >= 0; i--) {
    rev += str[i];
  }
  return rev;
}

void main(){
  String str="hello";
  print(reverse(str));
}