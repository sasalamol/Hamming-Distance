#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdint>
#include <bit>
using namespace std;

int main(){
int x = 63;
int y = 255;
 std::cout<<"\nHD: "<<__popcount(x ^ y);
 }
