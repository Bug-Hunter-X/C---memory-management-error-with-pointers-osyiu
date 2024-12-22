int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  std::cout << x << std::endl; //Output: 20
  std::cout << y << std::endl; //Output: 20
  // delete ptr; // Correct: this line is removed since x was not allocated using new
  return 0; 
} 