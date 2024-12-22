int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  std::cout << x << std::endl; //Output: 20
  std::cout << y << std::endl; //Output: 20
  delete ptr; //Error:  This will lead to undefined behavior
  return 0; 
}