#define ADVANCED_HPP

#include <vector>
#include <utility>

namespace Advanced
{
    int fibonacci_number(int n);
    int fibonacci_modulo(int n, int m);
    bool is_prime(int n);
    int euler_totient(int n);
    std::vector<int> prime_factors(int n);
    int chinese_remainder(const std::vector<int> &num, const std::vector<int> &rem);
} // namespace Advanced

#endif // ADVANCED_HPP
