#include <iostream>
#include <vector>
#include <numeric>

/// Program to find the sum of all multiples of 3 or 5 below 1000
int main()
{

    std::vector<size_t> multiples;

    // Find all the multiples of 3 or 5 below 1000 and put them in a vector
    for (size_t number = 1u; number < 999u; ++number) {
        if (number % 3u == 0u | number % 5u == 0u) {
            multiples.push_back(number);
        }
    }

    // Sum the multiples
    const int sumMultiples = std::accumulate(multiples.begin(), multiples.end(), 0);

    // Display the result
    std::cout << sumMultiples << '\n';

    return 0;

}