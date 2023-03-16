#include <iostream>
#include <string>
using namespace std;

static inline __attribute__((flatten))
uint32_t HD(uint32_t x, uint32_t y) {
 return __builtin_popcount(x ^ y);
}

int main () {
auto x = 63;
auto y = 61;
	std::cout << HD(x, y);
  return 0;
}
