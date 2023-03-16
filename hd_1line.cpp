#include <iostream>
#include <string>
using namespace std;

int main () {
auto x = 63;
auto y = 0;
	std::cout << __builtin_popcount(x ^ y);
	return 0;
}
