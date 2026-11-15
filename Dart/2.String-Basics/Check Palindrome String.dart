//Check Palindrome String
// example str= "racecar" output= True



bool check(String str) {
  if (str.isEmpty) {
    return false;
  }
  int start = 0;
  int end = str.length - 1;   

  while (start < end) {
    if (str[start] != str[end]) {
      return false;
    }
    start++;
    end--;
  }
  return true;
}

void main() {
  print(check("madam"));    // true
  print(check("racecar"));  // true
  print(check("hello"));    // false
  print(check(""));         // false
}