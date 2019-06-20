#include <iostream>
#include <vector>
#include <numeric>

/// Program to find the sum of all multiples of 3 or 5 below 1000
int main()
{

    std::vector<int> multiples;

    // Find all the multiples of 3 or 5 below 1000 and put them in a vector
    for (int number = 1; number < 999; ++number) {
        if (number % 3 == 0 || number % 5 == 0) {
            multiples.push_back(number);
        }
    }

    // Sum the multiples
    const int sumMultiples = std::accumulate(multiples.begin(), multiples.end(), 0);

    // Display the result
    std::cout << sumMultiples << '\n';

    return 0;

}