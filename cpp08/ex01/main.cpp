#include "span.h"

int main() {
    // Subject tests
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }


    // {
    //     Span sp = Span(5);
    //     int size = 5;

    //     // Try to add over than size elenents
    //     for (int i = 0; i < size; i++) {
    //         try {
    //             sp.addNumber(i);
    //         } catch(const std::exception& e) {
    //             std::cout << e.what() << std::endl;
    //         }
    //     }
    // }


    // {
    //     // Test shortestSpan when only 1 element
    //     Span sp = Span(1);
    //     sp.addNumber(5);
    //     try {
    //         sp.shortestSpan();
    //     } catch(const std::exception& e) {
    //         std::cout << e.what() << std::endl;
    //     }
        
    //     // Test longestSpan when only 1 element
    //     Span sp = Span(1);
    //     sp.addNumber(5);
    //     try {
    //         sp.longestSpan();
    //     } catch(const std::exception& e) {
    //         std::cout << e.what() << std::endl;
    //     }
    // }


    // // Test longestSpan() and shortestSpan() #1
    // {
    //     // Create Span
    //     Span sp = Span(5);
    //     sp.addNumber(0);
    //     sp.addNumber(42);
    //     sp.addNumber(142);
    //     sp.addNumber(242);
    //     sp.addNumber(4242);

    //     // Test longestSpan()
    //     std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    //     // Test shortestSpan()
    //     std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    // }


    // // Test longestSpan() and shortestSpan() #2
    // {
    //     // Create Span
    //     Span sp = Span(50100);
    //     for (size_t i = 0; i <= 50000; i++)
    //         sp.addNumber(i);

    //     // Test longestSpan()
    //     std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    //     // Test shortestSpan()
    //     std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    // }


    // // Test longestSpan() and shortestSpan() #3
    // {
    //     // Create Span
    //     Span sp = Span(15);
    //     sp.addNumber(5431);
    //     sp.addNumber(11);
    //     sp.addNumber(14351);
    //     sp.addNumber(0);
    //     sp.addNumber(-134);

    //     // Test longestSpan()
    //     std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    //     // Test shortestSpan()
    //     std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    // }


    // // Test longestSpan() and shortestSpan() #4
    // {
    //     // Create Span
    //     Span sp = Span(2);
    //     sp.addNumber(5431);
    //     sp.addNumber(11);

    //     // Test longestSpan()
    //     std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    //     // Test shortestSpan()
    //     std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    // }


    // // Test addNumbers
    // {
    //     int size_span = 8;
    //     // Create Span
    //     Span sp = Span(size_span);
    //     sp.addNumber(0);
    //     sp.addNumber(42);
    //     sp.addNumber(142);
    //     sp.addNumber(242);
    //     sp.addNumber(4242);

    //     // Create vector
    //     std::vector<int> vector;
    //     vector.push_back(21);
    //     vector.push_back(2121);
    //     vector.push_back(4221);

    //     // addNumbers
    //     sp.addNumbers(vector.begin(), vector.end());
    //     for (size_t i = 0; i < sp.getSize(); i++)
    //         std::cout << sp[i] << std::endl;
    // }


    // // Test addNumbers with exception
    // {
    //     int size_span = 15;
    //     // Create Span
    //     Span sp = Span(size_span);
    //     sp.addNumber(0);
    //     sp.addNumber(42);
    //     sp.addNumber(142);
    //     sp.addNumber(242);
    //     sp.addNumber(4242);

    //     // Create vector
    //     std::vector<int> vector;
    //     vector.push_back(21);
    //     vector.push_back(2121);
    //     vector.push_back(4221);

    //     // addNumbers
    //     sp.addNumbers(vector.begin(), vector.end());
    //     try {
    //         for (size_t i = 0; i < sp.getSize(); i++)
    //             std::cout << sp[i] << std::endl;
    //     } catch (std::exception &ex) {
    //         std::cout << "❌Error exception: " << ex.what() << std::endl;
    //     }
    // }

    return 0;
}
