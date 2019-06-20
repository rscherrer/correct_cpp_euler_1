#include <iostream>
#include <vector>
#include <numeric>


/// Function to find all multiples of 3 or 5 below 1000
std::vector<int> findMultiples()
{
    std::vector<int> multiples;

    for (int number = 1; number < 1000; ++number) {
        if (number % 3 == 0 || number % 5 == 0) {
            multiples.push_back(number);
        }
    }

    return multiples;
}


/// Program to find the sum of all multiples of 3 or 5 below 1000
int main()
{

    // Find all the multiples of 3 or 5 below 1000 and put them in a vector
    std::vector<int> multiples = findMultiples();

    // Sum the multiples
    const int sumMultiples = std::accumulate(multiples.begin(), multiples.end(), 0);

    // Display the result
    std::cout << sumMultiples << '\n';

    return 0;

}