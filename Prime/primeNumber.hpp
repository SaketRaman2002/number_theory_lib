#ifndef PRIME_NUMBER_HPP
#define PRIME_NUMBER_HPP

#include <vector>

namespace PrimeNumber
{
    bool is_prime(int n);
    std::vector<int> generate_primes(int limit);
    std::vector<int> prime_factors(int n);
} // namespace PrimeNumber

#endif // PRIME_NUMBER_HPP
