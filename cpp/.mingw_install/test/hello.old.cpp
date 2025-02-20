#include <iostream>
#include <cstdlib> // For malloc and free
#include <filesystem>
#include <iomanip>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <list>

int test_malloc() {
    std::cout << "Running test_malloc\t|\t";
    // Setup
    int* ptr = (int*)malloc(10 * sizeof(int));
    if (ptr == nullptr) {
        std::cerr << "Memory allocation failed!" << std::endl;
        return 1;
    }

    // Execute
    for (int i = 0; i < 10; ++i) {
        ptr[i] = i * 2;
    }

    // Assert
    for (int i = 0; i < 10; ++i) {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    // Teardown
    free(ptr);
    return 0;
}

void string_test() {
    std::cout << "Running string_test\t|\t";
    // Setup
    std::string s = "Hello, world!";

    // Execute & Assert
    std::cout << s << std::endl;

    // Teardown (not needed for this test)
}

void float_test() {
    std::cout << "Running float_test\t|\t";
    // Setup
    float f = 3.14;

    // Execute & Assert
    std::cout << f << std::endl;

    // Teardown (not needed for this test)
}

void int_test() {
    std::cout << "Running int_test\t|\t";
    // Setup
    int i = 42;

    // Execute & Assert
    std::cout << i << std::endl;

    // Teardown (not needed for this test)
}

void setw_test() {
    std::cout << "Running setw_test\t|\t";
    // Setup & Execute & Assert
    std::cout << "[" << std::setw(10) << "Hello" << "]" << std::endl;

    // Teardown (not needed for this test)
}

void map_test() {
    std::cout << "Running map_test\t|\t";
    // Setup
    std::map<std::string, int> m;
    m["a"] = 1;
    m["b"] = 2;
    m["c"] = 3;

    // Execute & Assert
    std::cout << m["a"] << std::endl;

    // Teardown (not needed for this test)
}

void vector_test() {
    std::cout << "Running vector_test\t|\t";
    // Setup
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Execute & Assert
    std::cout << v[0] << std::endl;

    // Teardown (not needed for this test)
}

void list_test() {
    std::cout << "Running list_test\t|\t";
    // Setup
    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    // Execute & Assert
    std::cout << l.front() << std::endl;

    // Teardown (not needed for this test)
}

void test_fileio() {
    std::cout << "Running test_fileio\t|\t";
    // Setup
    std::filesystem::path filePath = std::filesystem::current_path() / "test.txt";
    std::ifstream file(filePath);
    std::string line;

    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filePath << std::endl;
        return;
    }

    // Execute & Assert
    std::cout << "Contents of '" << filePath.string() << "':\t";
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    // Teardown
    file.close();
}

void test_exception() {
    std::cout << "Running test_exception\t|\t";
    // Setup & Execute
    try {
        throw std::runtime_error("Test exception");
    } catch (std::runtime_error& e) {
        // Assert
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    // Teardown (not needed for this test)
}

void test_move() {
    std::cout << "Running test_move\t|\t";
    // Setup
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Execute
    std::vector<int> v2 = std::move(v);

    // Assert (not needed for this test)
    // Teardown (not needed for this test)
    std::cout << v[0] << "\t";
    std::cout << v2[0] << std::endl;
}

void test_swap() {
    std::cout << "Running test_swap\t|\t";
    // Setup
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    std::vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    // Execute
    v.swap(v2);

    // Assert (not needed for this test)
    // Teardown (not needed for this test)
    std::cout << v[0] << "\t";
    std::cout << v2[0] << std::endl;
}

void test_erase() {
    std::cout << "Running test_erase\t|\t";
    // Setup
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Execute
    v.erase(v.begin() + 1);

    // Assert
    std::cout << v[0] << std::endl;

    // Teardown (not needed for this test)
}

void test_insert() {
    std::cout << "Running test_insert\t|\t";
    // Setup
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Execute
    v.insert(v.begin() + 1, 4);

    // Assert
    std::cout << v[1] << std::endl;

    // Teardown (not needed for this test)
}

void test_random_access() {
    std::cout << "Running test_random_access\t";
    // Setup
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Execute & Assert
    std::cout << v[1] << std::endl;

    // Teardown (not needed for this test)
}

void test_random_number() {
    std::cout << "Running test_random_number\t";
    // Setup & Execute
    int r = rand();

    // Assert
    std::cout << r << std::endl;

    // Teardown (not needed for this test)
}

// test class
class Test {
public:
    Test() {
        std::cout << "Test constructor" << std::endl;
    }

    ~Test() {
        std::cout << "Test destructor" << std::endl;
    }
};

void test_class() {
    std::cout << "Running test_class\t|\t";
    // Setup & Execute & Assert
    Test t;

    // Teardown (handled by destructor)
}

int main() {
    try
    {
        std::cout << "Starting tests..." << std::endl;

        // run all above tests
        // int ret = test_malloc();
        // std::cout << "test_malloc returned: " << ret << std::endl;
        // string_test();
        // float_test();
        // int_test();
        // setw_test();
        // map_test();
        // vector_test();
        // list_test();
        // test_fileio();
        // test_exception();
        // test_move();
        // test_swap();
        // test_erase();
        // test_insert();
        // test_find();
        // test_random_access();
        // test_random_number();
        // test_class();

        std::cout << "All tests completed." << std::endl;

        return 0;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
}