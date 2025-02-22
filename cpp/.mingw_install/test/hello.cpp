/****************************************************************************
 * File: hello.cpp
 * Author: Elijah Harrison
 * Description: This file will test the stability of the g++ compiler
 *      on Windows. If reduction is needed, this test should be used to verify
 *      that the compiler is still stable enough for our needs.
 * Date: 2/20/2025
 ****************************************************************************/

// Define / Import
#include <iostream>
#include <exception>
#include <iomanip>
#include <map>
#include <vector>
#include <list>
#include <fstream>

void malloc_test() {
    try {
        std::cout << "Running test_malloc\t|\t";
        // Setup
        int* ptr = (int*)malloc(10 * sizeof(int));
        if (ptr == nullptr) {
            std::cerr << "Memory allocation failed!" << std::endl;
        }

        // Execute & Assert
        for (int i = 0; i < 10; i++) {
            ptr[i] = i * 2;
        }

        // Poor Man's Debug
        for (int i = 0; i < 10; i++) {
            std::cout << ptr[i] << " ";
        }

        // Teardown
        free(ptr);
        std::cout << "\t|\tTest malloc passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "\t|\tTest malloc failed\t|\t" << e.what() << std::endl;
    }
}

void float_test() {
    try {
        std::cout << "Running float_test\t|\t";
        // Setup
        float f = 3.14;

        // Execute & Assert
        std::cout << f << "\t\t\t";

        // Teardown (not needed for this test)
        std::cout << "\t|\tTest float passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test float failed\t|\t" << e.what() << std::endl;
    }
}

void string_test() {
    try {
        std::cout << "Running string_test\t|\t";
        // Setup
        std::string s = "Hello, world!";

        // Execute & Assert
        std::cout << s << "\t\t";

        // Teardown (not needed for this test)
        std::cout << "\t|\tTest string passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test string failed\t|\t" << e.what() << std::endl;
    }
}

void int_test() {
    try {
        std::cout << "Running int_test\t|\t";
        // Setup
        int i = 42;

        // Execute & Assert
        std::cout << i << "\t\t\t";

        // Teardown (not needed for this test)
        std::cout << "\t|\tTest int passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test int failed\t|\t" << e.what() << std::endl;
    }
}

void setw_test() {
    try {
        std::cout << "Running setw_test\t|\t";
        // Setup & Execute & Assert
        std::cout << "[" << std::setw(10) << "Hello" << "]" << "\t\t";

        // Teardown (not needed for this test)
        std::cout << "\t|\tTest setw passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test setw failed\t|\t" << e.what() << std::endl;
    }
}

void map_test() {
    try {
        std::cout << "Running map_test\t|\t";
        // Setup
        std::map<std::string, int> m;
        m["a"] = 1;
        m["b"] = 2;
        m["c"] = 3;

        // Execute & Assert
        for (auto it = m.begin(); it != m.end(); it++) {
            std::cout << it->first << ": " << it->second << "\t";
        }

        // Teardown (not needed for this test)
        std::cout << "\t|\tTest map passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test map failed\t|\t" << e.what() << std::endl;
    }
}

void vector_test() {
    try {
        std::cout << "Running vector_test\t|\t";
        // Setup
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);

        // Execute & Assert
        for (auto it = v.begin(); it != v.end(); it++) {
            std::cout << *it << "\t";
        }

        // Teardown (not needed for this test)
        std::cout << "\t|\tTest vector passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test vector failed\t|\t" << e.what() << std::endl;
    }
}

void list_test() {
    try {
        std::cout << "Running list_test\t|\t";
        // Setup
        std::list<int> l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);

        // Execute & Assert
        for (auto it = l.begin(); it != l.end(); it++) {
            std::cout << *it << "\t";
        }

        // Teardown (not needed for this test)
        std::cout << "\t|\tTest list passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test list failed\t|\t" << e.what() << std::endl;
    }
}

void test_exception() {
    std::cout << "Running test_exception\t|\t";
    // Setup & Execute
    try {
        throw std::runtime_error("Test exception");
    } catch (std::runtime_error& e) {
        // Assert
        std::cout << "Caught exception: " << e.what();
    }

    // Teardown (not needed for this test)
    std::cout << "|\tTest exception passed!" << std::endl;
}

void test_move() {
    std::cout << "Running test_move\t|\t";

    try {
        // Setup
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        int v_0 = v[0];

        // Execute
        std::vector<int> v2 = std::move(v);

        // Assert
        if (v2[0] != v_0) {
            throw std::runtime_error("Move failed!");
        }

        // Teardown (not needed for this test)
        std::cout << v2[0] << "\t";  // Accessing v2 instead of v
        std::cout << v2[1] << "\t";  // Accessing v2 instead of v
        std::cout << v2[2] << "\t";  // Accessing v2 instead of v

        std::cout << "\t|\tTest move passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test move failed\t|\t" << e.what() << std::endl;
    }
}

void test_swap() {
    try {
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
        int v_0 = v[0];
        int v2_0 = v2[0];

        // Execute
        v.swap(v2);

        // Assert
        if (v[0] != v2_0 || v2[0] != v_0) {
            throw std::runtime_error("Swap failed!");
        }

        // Teardown (not needed for this test)
        std::cout << v[0] << "\t";  // Accessing v instead of v2
        std::cout << v2[0] << "\t";  // Accessing v2 instead of v

        std::cout << "\t\t|\tTest swap passed!" << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Test swap failed\t|\t" << e.what() << std::endl;
    }
}

void test_erase() {
    try {
        std::cout << "Running test_erase\t|\t";
        // Setup
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);

        // Execute
        v.erase(v.begin() + 1);

        // Assert
        if (v[0] != 1 || v[1] != 3) {
            throw std::runtime_error("Erase failed!");
        }

        // Poor Man's Debug
        std::cout
            << v[0] << "\t"
            << v[1] << "\t";

        // Teardown (not needed for this test)
        std::cout << "\t\t|\tTest erase passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test erase failed\t|\t" << e.what() << std::endl;
    }
}

void test_insert() {
    try {
        std::cout << "Running test_insert\t|\t";
        // Setup
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);

        // Execute
        v.insert(v.begin() + 1, 4);

        // Assert
        if (v[1] != 4) {
            throw std::runtime_error("Insert failed!");
        }

        // Poor Man's Debug
        std::cout << v[1] << "\t\t\t";

        // Teardown (not needed for this test)
        std::cout << "\t|\tTest insert passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test insert failed\t|\t" << e.what() << std::endl;
    }
}

void test_random_access() {
    try {
        std::cout << "Running t_random_access\t|\t";
        // Setup
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);

        // Execute & Assert
        if (v[1] != 2) {
            throw std::runtime_error("Random access failed!");
        }

        // Poor Man's Debug
        std::cout << v[0] << "\t\t\t";

        // Teardown (not needed for this test)
        std::cout << "\t|\tTest random access passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test random access failed\t|\t" << e.what() << std::endl;
    }
}

void test_random_number() {
    try {
        std::cout << "Running t_random_number\t|\t";
        // Setup & Execute
        int r = rand();

        // Assert
        if (r < 0 || r > RAND_MAX) {
            throw std::runtime_error("Random number failed!");
        }

        // Poor Man's Debug
        std::cout << r << "\t\t\t";

        // Teardown (not needed for this test)
        std::cout << "\t|\tTest random number passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test random number failed\t|\t" << e.what() << std::endl;
    }
}

// test class
class Test {
public:
    Test() {
        std::cout << "Constructor ";
    }

    ~Test() {
        std::cout << "Destructor ";
    }

    int test_method() {
        std::cout << "Method ";
        return 0;
    }
};

void test_class() {
    try {
        std::cout << "Running test_class\t|\t";
        
        // Setup & Execute
        {
            Test t;
    
            // Assert
            if (t.test_method() != 0) {
                throw std::runtime_error("Test class failed!");
            }
        } // Teardown (handled by destructor)

        std::cout << "\t|\tTest class passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test class failed\t|\t" << e.what() << std::endl;
    }
}

void test_filecreate() {
    try {
        std::cout << "Running test_filecreate\t|\t";
        // Setup
        std::string tmpTxt = "tmp.txt";
        std::ofstream file(tmpTxt);

        // Execute
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file: " + tmpTxt);
        }

        // Poor Man's Debug
        std::cout << "Creating file '" << tmpTxt << "'.";

        // Tear down
        file.close();
        std::cout << "\t|\tTest filecreate passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test filecreate failed\t|\t" << e.what() << std::endl;
        throw e;
    }
}

void test_fileout() {
    try {
        std::cout << "Running test_fileout\t|\t";
        // Setup
        std::string tmpTxt = "tmp.txt";
        std::ofstream file(tmpTxt);

        // Execute
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file: " + tmpTxt);
        }
        std::string content = "hELLO, WORLD!!! :D";
        file << content << std::endl;

        // Poor Man's Debug
        std::cout << "Writing to file '" << tmpTxt << "'.";

        // Tear down
        file.close();
        std::cout << "\t|\tTest fileout passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test fileout failed\t|\t" << e.what() << std::endl;
        throw e;
    }
}

void test_readfile() {
    try {
        std::cout << "Running test_readfile\t|\t";
        // Setup
        std::string tmpTxt = "tmp.txt";
        std::string line;

        // Execute
        std::ifstream file(tmpTxt);
        
        // Assert
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file: " + tmpTxt);
        }

        // Poor Man's Debug
        while (std::getline(file, line)) {
            std::cout << "'" << line << "'\t";
        }

        // Tear down
        file.close();
        std::cout << "\t|\tTest readfile passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test readfile failed\t|\t" << e.what() << std::endl;
        throw e;
    }
}

void test_filedelete() {
    try {
        std::cout << "Running test_filedelete\t|\t";
        // Setup
        std::string tmpTxt = "tmp.txt";

        // Execute
        if (remove(tmpTxt.c_str()) != 0) {
            throw std::runtime_error("Failed to delete file: " + tmpTxt);
        }

        // Poor Man's Debug
        std::cout << "Deleting file '" << tmpTxt << "'.";

        // Tear down
        std::cout << "\t|\tTest filedelete passed!" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Test filedelete failed\t|\t" << e.what() << std::endl;
        throw e;
    }
}

void test_fileio() {
    try {
        std::cout << "Running test_fileio:\tV\n";
        test_filecreate();
        test_fileout();
        test_readfile();
        test_filedelete();
    }
    catch (const std::exception& e) {
        std::cerr << "Test fileio failed\t|\t" << e.what() << std::endl;
    }
}

int main() {
    try
    {
        std::cout << "Hello, world!" << std::endl;
        std::cout << "Running tests:" << std::endl;

        // Run tests
        malloc_test();
        string_test();
        float_test();
        int_test();
        setw_test();
        map_test();
        vector_test();
        list_test();
        test_exception();
        test_move();
        test_swap();
        test_erase();
        test_insert();
        test_random_access();
        test_random_number();
        test_class();
        test_fileio();

        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
