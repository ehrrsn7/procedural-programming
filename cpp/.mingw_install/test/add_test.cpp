#include <iostream>
#include <cassert>
#include "add.hpp"

void test_add() {
    std::cout << ">> add(2, 3) [" << add(2, 3) << "] == 5" << std::endl;
    assert(add(2, 3) == 5);  // Passes
    std::cout << ">> add(2, 3) [" << add(-1, 1) << "] == 0" << std::endl;
    assert(add(-1, 1) == 0); // Passes
    std::cout << ">> add(2, 3) [" << add(0, 0) << "] == 0" << std::endl;
    assert(add(0, 0) == 0);  // Passes
    std::cout << "All tests passed!" << std::endl;
}

int main() {
    std::cout << "Running add_test..." << std::endl;
    test_add();
    float f = 5.4;
    std::cout << "test float" << f << std::endl;
    return 0;
}
