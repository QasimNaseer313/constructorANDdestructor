#include <iostream>
// Normal function
int add(int a, int b) {
return a + b;
}
// Inline function
inline int multiply(int x, int y) {
return x * y;
}
int main() {

std::cout<<"output"<<std::endl;
 int resultAdd = add(3, 4);
 int resultMultiply = multiply(2, 5);
 std::cout << "Result of addition: " << resultAdd << std::endl;
std::cout << "Result of multiplication: " << resultMultiply << std::endl;
 return 0;
}
