#include <iostream>

/*
  using bellow line is ultranative, but after using this line
  you can use std::cout to count only, means you can remove
  std:: from input/output from code and it is recommanded.
*/
// using namespace std;

int main() {
  std::cout << "Hello World!";

  int x, y, sum;

  std::cout << "Please Enter number in x:";

  std::cin >> x;

  std::cout << "Please Enter number in y:";

  std::cin >> y;

  sum = x + y;

  std::cout << "Sum is:" << sum;
  return 0;
}