int main() { int x = 5; int y = 0; int z = 0; if (y != 0) { z = x / y; } else { std::cerr << "Error: Division by zero!" << std::endl; return 1; } return 0; }